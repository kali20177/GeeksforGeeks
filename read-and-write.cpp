#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Class to define the properties
class Contestant
{
	public:
		string Name;
		int Age, Ratings;

		// function declaration of input() to input info
		int input();		
		// function declaration of output_highest_rated() to 
		// extract info from file Data Base
		int output_highest_rated();
};

int Contestant::input()
{
	// object to write in file 
	ofstream file_obj;

	// opening file in append mode
	file_obj.open("Input.txt", ios::app);

	Contestant obj;

	string str = "Michael";
	int age = 18, ratings = 2500;

	// assigning data into object
	obj.Name = str;
	obj.Age = age;
	obj.Ratings = ratings;

	// writing the object's data in file 
	file_obj.write((char*)&obj, sizeof(obj));

	// Feeding appropriate data in variables
    str = "Terry";
    age = 21;
    ratings = 3200;

    // Assigning data into object
    obj.Name = str;
    obj.Age = age;
    obj.Ratings = ratings;

    // Writing the object's data in file
    file_obj.write((char*)&obj, sizeof(obj));

    return 0;
}

int Contestant::output_highest_rated()
{
	ifstream file_obj;
	// opening file in input mode
	file_obj.open("Input.txt", ios::in);

	// object of class contestant to input data in file
	Contestant obj;

	// Reading from file into object "obj"
	file_obj.read((char*)&obj, sizeof(obj));

	// max to store maxium ratings
	int max = 0;

	string Highest_rated;

	// checking till we have the feed
	while (!file_obj.eof())
	{
		if (obj.Ratings > max)
		{
			max = obj.Ratings;
			Highest_rated = obj.Name;
		}
		// checking further
		file_obj.read((char*)&obj, sizeof(obj));
	}

	cout << Highest_rated << endl;
	return 0;
}

int main()
{
	Contestant object;

	object.input();

	object.output_highest_rated();

	return 0;
}
