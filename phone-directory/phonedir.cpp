// https://repl.it/join/tiaqwltl-harmankalair123

// reusing my code from the previous exercises
// first i outputted the data from a csv file and worked step by step from that point forward
// used size() to return the size of the set container in the for loop
// compares the line in the file with the user search
// once found, it will output the searched results

#include<fstream>
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
	ifstream fin;
	fin.open("directory.csv");
	if(fin.fail())
	{
		cout << "File not found.\n";
		exit(1);
	}
	string search;
	cout << "Please enter a name or number to search: ";
	cin  >> search;
	bool isFound=0;
	while(!fin.eof())
	{
		string line;
		getline(fin,line);
		for(int i=0;i<search.size();i++) // returns the size of the set container.
		{
			if(line[i]==search[i]) // checks if the characters matches values in the file or line.
				isFound = 1; // sets to true
			else
			{
				isFound =0; // sets to false if not found
				break;
			}
		}

		if(isFound == 1)
		{
			cout << "Contact details: \n";
				cout << line << endl;

			break;
		}

	}

	if(fin.eof()&&(!isFound))
	{
		cout << "Sorry, no contact details found\n";
	}

	fin.close();

	return 0;
}

