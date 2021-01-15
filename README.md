# AP-Module-C-Wednesday-Exercises

This repository includes challenges presented on Wednesday. C++ is the chosen langauge for this 'Advance Programming' Module. Replit link has been provided on each file.

## 1: File Exists
This C++ program that allows the user to enter a filename. The program displays the file’s status, if the file exists include the file size and last modified date.

Example format shown below:
```
Filename to check: data.csv
data.csv does not exist
--OR--
Filename to check: data.csv
data.csv, 25 bytes, last modified: Tue Jan 12 14:41:00 2021
```

## 2: File Writer
This C++ program allows the user to enter a name. The program will append (or create in the first instance) a plain text file called “list.csv” with the name entered. Once updated, the user should be prompted to enter another name, if no additional names are expected the program should finish with a goodbye message.

Example format shown below:
```
Enter name: Jaelynn Stuart
Updating file...
Add another (y/n)? Y
Enter name: John Smith
Updating file...
Add another (y/n)? N
Goodbye
```

## 3: File Reader
This C++ program prompts the user to enter a filename. If the file exists, the program will display and add a count to each line and display the total number of lines at the end; an appropriate indication should be given if the file specified does not exist.

Example format shown below:
```
Please enter a valid filename: list.cvs
Sorry, ‘list.cvs’ does not exist.
Please enter a valid filename: list.csv
1: Jaelynn Stuart
2: John Smith
Total number of lines read: 2
```

## PRIMER: Data File Parser
This C++ program reads the following data from a file (i.e., an external data stream):

* Noak, Jaylinn, 21500
* Apollinaire, Venkata, 29250
* Faith, Mara, 30000
* Yasamin, Shukriyya, 44500
* Zahir, Marcel, 31200
* Maia, Ela, 45600
* Liam, Oliver, 43300
* Luka, Jones, 45600
* Alexander, Smith, 20500

Processes the records and displays them as a formatted, aligned and evenly spaced table as shown in the
example below.
```
Initial   Last       Salary
-------   -------    -------
N.        Jaylinn    £21500
A.        Venkata    £23250
F.        Mara       £30000 
Y.        Shukriyya  £44500 
Z.        Marcel     £31200 
M.        Ela        £45600 
L.        Oliver     £43300 
L.        Jones      £45600 
A.        Smith      £20500 
```

## PRIMER: Phone Directory
This C++ program uses an external data stream to permanently hold phone contacts. This program prompts the user for either a name or phone number and provides any matched record or records.

Example format shown below:
```
Please enter a name or number to search: 0203 105 0125
Searching 10 records ...
Contact details:
Ada College, T: 0203 105 0125
--OR—
Please enter a name or number to search: Ada College
Searching 10 records ...
Contact details:
Ada College, T: 0203 105 0125
--OR—
Please enter a name or number to search: 0203 105 0120
Searching 10 records ...
Sorry, no contact details found
```

## PRIMER: Password Validator V2
This version 2 of C++ Password Validator service reads user credentials from an external data steam (i.e., data file). As with the initial version, the program prompt the user for a username and password and compare them against already known credentials. If the username provided exists and the password matches the program displays “Welcome” followed by the users first name. If the username does not exist or the password is incorrect a “Failed to Authenticate” message is shown.

Example format shown below:
```
Username: mike@ada.ac
Password: AdaRocks
Welcome Mike
--OR--
Username: casper@ada.ac
Password: AdaRocks
Failed to Authenticate
```
