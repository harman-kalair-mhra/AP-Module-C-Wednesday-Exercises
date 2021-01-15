// https://repl.it/join/nmbldbym-harmankalair123

// using recycled code from the password validator v1 and // read file exercises
// conducted extra research and came across strcmp function
// strcmp compares char string 1 and string 2. 1 being from // the user and 2nd a stored value in the file
// implemented the strcmp function in a while loop to check // if it matches and outputs a simple message.

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
char login_password[30];
char stored_password[30]; // stored value in the file  
char login_username[30];
char stored_username[30]; // stored value in the file  

fstream getFile("users.csv",ios::in);
if (!getFile) { 
    cout<<"File not loaded!"<<endl;
    return -1; 
}
cout<<"Username: ";
cin>>login_username;
while(strcmp(login_username,stored_username)){ 

//if login and stored usernames are equal, function strcmp returns 0,
//at first loop they are certainly not, so it is: while(1)

    getFile>>stored_username;
    if(getFile.eof()){   //if it is the end of file
        cout<<"Username does not exist. "<<endl;
        return -1;  
    }
}
getFile>>stored_password; 

//since username and password are in the same line, password next to
//correctly inputted username is saved in stored_password

cout<<"Password: ";   
//now user enters password to confirm username
cin>>login_password;
while(strcmp(stored_password,login_password)){
    cout<<"Failed to Authenticate "<<endl;
    return 0;
}
cout<<"Welcome " << "Mike"<<endl;
return 0;
}
