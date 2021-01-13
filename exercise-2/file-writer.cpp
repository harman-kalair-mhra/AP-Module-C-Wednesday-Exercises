// https://repl.it/join/xergkgbl-harmankalair123

// conducted some further research on C++ files, such as ofstream
// decomposed the problem into smaller chunks
// and simply began with input from the user
// used ofstream to create and write to file 'list'
// used ::app to add new values to the list, alongside with the previous values
// simple if statement inside the while loop to perform action based on user selection

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string userInput;
  char choice;
while(true) {
  cout << "Enter name: ";
  cin >> userInput; 
  cout << "Updating... ";
  // Create a text file
  ofstream writeToFile("list.csv", ofstream::app);

  // Write to the file
  writeToFile << userInput << "\n";
  
  cout << "\n";
  cout << "Do you want to enter another name: ";
  cin >> choice;

  if (choice == 'Y' || choice == 'y') 
  {

  }
  else 
  {
    cout << "Goodbye \n";
    return 0;
  }

}

}
