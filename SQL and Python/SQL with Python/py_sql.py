import sqlite3
import pwinput

def main():
    conn = sqlite3.connect('accounts.db')
    cursor=conn.cursor()
    cursor.execute("CREATE TABLE IF NOT EXISTS Users (ID INTEGER PRIMARY KEY AUTOINCREMENT, Username TEXT NOT NULL UNIQUE, Password TEXT NOT NULL)")

    while True:
        try:
            answer=(input("Would you like to (sign-in/sign-up)?: ")).lower()
        except ValueError:
            continue
        if answer in ('sign in', 'sign up', 'sign-in', 'sign-up'):
            break

    def signIn():
        if answer not in ('sign in', 'sign-in'):
            return
    
        user = input("Enter username: ")
        pwd = pwinput.pwinput(prompt="Enter password: ")

        cursor=conn.cursor()
        row=cursor.execute("SELECT * FROM Users WHERE Username=? AND Password=?",(user,pwd,))
        
        flag=False
        for i in row:
            if i:
                flag=True
        if flag:
            print("Successfully logged in.")
        else:
            print("Incorrect details.")
        
    def signUp():
        if answer not in ('sign up', 'sign-up'):
            return
    
        while True:
            try:
                user=input("Enter username: ")
                pwd=pwinput.pwinput(prompt="Enter password: ")

                cursor.execute("INSERT INTO Users(ID,Username,Password) VALUES(NULL,?,?)",(user,pwd))
                print("Account created successfully.")
                flag=True
                
                conn.commit()
            except sqlite3.IntegrityError:
                n=(input("User already exists. Type 'cancel' to exit, or any key to continue: ")).lower()
                if n in ('cancel') and n not in (''):
                    break
                else:
                    continue
            if flag:
                break
    signIn()
    signUp()
main()
