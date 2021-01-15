// https://repl.it/join/jzwrllro-harmankalair123

// this part of challenge required an extension amount of research as new libraries were in place
// reused the code from the previous exercises
// decided to use a formatting library, where it allows you to set a fixed width
// The getline() function extracts characters from the input stream and appends it to the string object until // the delimiting character is encountered.



#include <iostream>
#include <fstream>
using namespace std;
#include <iomanip>

int main() {
  string fileName = "list.csv";
  ifstream input;

  input.open(fileName);

  if (!input.is_open()) {
    return 1; // error, if doesn't open
  }
  cout << "Initial " << "  "  << "Last " <<"   "<<  "Salary " << endl;
  cout<<setfill('-')<< left << setw(6)<<"-" << "   "<< setw(6)<< "-"<<  "   "<< setw(6)<< "-"<<endl;

  while(input) {
    string line;
    getline(input, line, (' '));

    string lastName;
    input >> lastName;

    int salary;
    input >> salary;

    input >> ws;

    if(!input) {
      break;
    }

    // cout  << setw(3) << line[0] <<  "   " << lastName << "   " << salary << "\n"<< endl;
    lastName[lastName.length() -1] = ' ';
    
    cout << setfill(' ') << setw(8) << left << line[0]  << setw(10) << left << lastName << "£" << setw(4) <<  salary << endl;
  }

  input.close();
}


