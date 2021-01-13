// https://repl.it/join/zqflwuhg-harmankalair123

// Continued with further research on read and write to files in C++.
// reusing some aspect of the codes from my previous exercises
// decomposed the problem and began with recycled code from my previous exercises
// getline library has been used, as it was recommeded
// getline() is a standard library function that is used to read a string or a line from // an input stream.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main () {
  
  string fileLine;
  string userInput;
  int count = 0;
  while(true){
    cout << "Please enter a valid filename: ";
    cin >> userInput;

    ifstream myFile (userInput);
    if (myFile.is_open())
    {
      while ( getline (myFile,fileLine) ) // reading each line from the file
      {
        cout << ++count << fileLine << '\n'; // increment the count by 1 each time
      }
      myFile.close();
      cout << "\n";
      cout << "Total number of lines read: " << count;
      return 0;
    }
    else{
      cout << "Sorry, '" << userInput << "' does not exist.\n\n" ; 
    }
  }
}
