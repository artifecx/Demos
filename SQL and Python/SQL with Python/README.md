#### Simple program that simulates signing-up or signing-in using Python and SQLite
- **Input 1:** Asks if user wants to sign in or sign up. (case **insensitive** but will ask again if not in the options.)
- **Input 2:** Asks for username and password.
- **Program:** Will either check the database if username and password exists, or will create new entry into the database.
- **Output:** Depends on first input.
  - **Login:** *Successfully logged in. / Incorrect details*
  - **Sign up:** *Account successfully created / User already exists*

> - Protected from SQL Injections.
> - Password recovery/account deletion not implemented.

#### Sample Outputs:
![py_sql-output](https://user-images.githubusercontent.com/93902958/160915212-df93b947-c393-4cb2-bfe2-3c18f9f1246a.png)
