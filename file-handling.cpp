#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream fout; // ofstream class

	string line;
	
	fout.open("sample.txt");

	while (fout)
	{
		// read line from standard input
		getline(cin, line);
	
		// press -1 to exit
		if (line == "-1")
			break;
		// write line in file
		fout << line << endl;
	}
	
	fout.close();

	ifstream fin; // ifstream class

	fin.open("sample.txt");

	while (fin) 
	{
		// read line int file
		getline(fin, line);
		// print line in console
		cout << line << endl;
	}

	fin.close();
	return 0;
}
