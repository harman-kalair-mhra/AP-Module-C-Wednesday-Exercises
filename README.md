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
