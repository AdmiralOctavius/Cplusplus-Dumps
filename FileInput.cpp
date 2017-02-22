/*****
My file - make header
****/


#include <iostream>
#include<fstream>
#include<string>
//#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Need an input file variable reference
	ifstream fin;
	//Need to init ofstream
	ofstream project4Out;

	//Opens output file, then clears file. Closes File
	project4Out.open("project4Out.txt");
	project4Out.clear();
	project4Out.close();

	//Setup paths to output
	/*project4Out.open("example.txt");
	project4Out << ("Hello World");
	project4Out << ("This is a test");
	project4Out.close();*/

	//Input file
	// Does not work for some reason fin.open("D:\Cartwright C++\FileInput\FileInput\Project4_Pay.txt");

	//Works
	//fin.open("Project4_Pay.txt");

	// OR
	string fileName;
	//string fileTitle;
	cout << "Enter the path to your input file, include file in path:";
	//cin >> fileName >> fileTitle;
	getline(cin, fileName);
	fin.open(fileName.c_str());
	/*cout << "Please give the file name:";
	getline(cin, fileTitle);
	cout << fileName << " || " << fileTitle << endl;
	string fileLocation = fileName + fileTitle;
	fin.open(fileLocation);*/
	//cout << "Enter file name:";
	//cin >> fileTitle;
	//fin.open(fileName);
	//Project4_Pay.txt

	string FirstName;

	string LastName;

	double currentSalary = 0.0;

	double percentIncrease = 0.0;

	double updatedSalary = 0.0;

	cout << setprecision(2);



	// use a EOF While loop to loop through an input file
	// to be safe, always PRIME your EOF While loops

	//fin >> input;           // reads first eligible item (in this case, an integer) from the file
							//check for string or int, if string ignore, if int begin calc
	//fin >> LastName1;	//use fin.eof for while loop //fin.eof()

	//NOTE: adding a space at the end of the file causes
		while (!fin.eof()) {
			fin >> LastName;
			fin >> FirstName;
			fin >> currentSalary;
			fin >> percentIncrease;
			cout << "Last Name:" << LastName << endl;
			cout << "First Name: " << FirstName << endl;
			cout << "Current Salary: " << fixed << currentSalary << endl;
			cout << "Percent Increase: " << fixed << percentIncrease << endl;
			//Do updated salary
			percentIncrease = percentIncrease / 100.0;
			updatedSalary = (currentSalary) * (1 + percentIncrease);
			//Lookup set fixed
			cout << "Updated Salary: " << fixed << updatedSalary << endl << endl;

			project4Out.open("project4Out.txt", ios::app);
			project4Out << "Last Name:" << LastName << endl;
			project4Out << "First Name: " << FirstName << endl;
			project4Out << "Current Salary: " << currentSalary << endl;
			project4Out << "Percent Increase: " << percentIncrease << endl << endl;

			project4Out.close();

	}
	/*while (!fin.eof())
	{
	sum += input;       // add to the sum
	fin >> input;       // read next value
	counter++;          // add to the count
	}*/


	/*cout << "Sum is " << setprecision(5) << sum << " and we found " << counter << " items." << endl;

	double f = 3.14159;
	cout << setprecision(3) << f << '\n';
	cout << setprecision(5) << f << '\n';
	cout << setprecision(9) << f << '\n';
	cout << fixed;
	cout << setprecision(5) << f << '\n';
	cout << setprecision(9) << f << '\n';
	*/


	system("pause");

	return 0;
}

