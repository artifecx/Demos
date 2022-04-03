import difflib
phonebook = {
    "Emmanuel": "+63-912-345-6789",
    "Leopold": "+63-923-456-7890",
    "Charles": "+63-934-567-8901",
    "Vittorio": "+63-945-678-9012",
    "Albrecht": "+63-956-789-0123",
    "Achilles": "+63-967-890-1234",
}

name=(input("Name: ")).capitalize()
similar=(''.join(difflib.get_close_matches(name, phonebook, n=1)))

if name in phonebook:
    print(f"Number: {phonebook[name]}")
elif similar:
    print(f"Did you mean: {similar}, "+phonebook[similar])
elif name not in phonebook:
    print("Details not found.")