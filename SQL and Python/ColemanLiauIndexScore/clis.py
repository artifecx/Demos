import math
def main():
    text=input("Insert text here: ")
    lcounter=0
    wcounter=1
    scounter=0
    
    for i in text:
        if(i.isalpha()):
            lcounter+=1
        elif i==" ":
            wcounter+=1
        elif i in [".", "!", "?"]:
            scounter+=1

    L=lcounter*100/wcounter
    S=scounter*100/wcounter
    CLIScore = round(0.0588*L-0.296*S-15.8)

    if(CLIScore >= 16):
        print("Score: Grade 16+")
    elif(CLIScore < 1):
        print("Score: Before Grade 1")
    else:
        print(f"Score: Grade {math.ceil(CLIScore)}")
    
main()