import csv
import re

def main():
    while True:
        try:
            n = (input("Enter database(main/small): ")).lower()
        except ValueError:
            continue
        if n in ('main', 'small'):
            break

    with open('databases/{}.csv'.format(n)) as dna_database:
        reader = csv.reader(dna_database)
    
        while True:
            try:
                n = int(input("Enter DNA sequence(1-20): "))
            except ValueError:
                continue
            if 1<= n <=20:
                break

        for i, row in enumerate(reader):
            if i == 0:
                with open('sequences/{}.txt'.format(n)) as dna_sequence:
                    line = next(dna_sequence)
                    lcount_str = []
                    for i in range(1, len(row)):
                        sequence = row[i]
                        matches = (match[0] for match in re.finditer(fr"(?:{sequence})+", line))
                        try:
                            lcount = int(len(max(matches, key=len)) / len(sequence))
                            lcount_str.append(lcount)
                        except ValueError:
                            lcount_str.append(0)
            else:
                list_database_strs = list(map(int, row[1:]))
                if list_database_strs == lcount_str:
                    print(f"DNA Belongs to: {row[0]}")
                    break
        else:
            print("No match")       
main()