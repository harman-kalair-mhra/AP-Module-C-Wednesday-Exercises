// https://repl.it/join/gilxqzut-harmankalair123

// began doing some research on stat buf, which is a system struct that is 
// defined to store information about files
// for this exercise, decided to create a function at the top and call it in the main
// as this would be easier to debug

#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <ctime>
using namespace std;

  struct stat buf;
bool checkFile(const string & name) {
  return (stat(name.c_str(), & buf) == 0);
}

int main () {
   string userInput;

   cout << "Filename to check: ";
     cin >> userInput;

   if (checkFile(userInput)) {
    cout << "\n";
    cout << userInput << ", " << buf.st_size << " bytes, last modified: " << ctime( & buf.st_mtime) << "\n";
  } else {
    cout << userInput << " does not exist \n";
  }
  return 0;
}
