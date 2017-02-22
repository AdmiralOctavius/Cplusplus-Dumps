/*****
Name: Isaac Bennett
Course: CIT-163-202
Date: Febuary 21, 2017
******
Files for Assignment: employeePay.cpp
Purpose of file: File input program that calculates new employee pay. Also outputs to other file.
****/


#include<iomanip>
#include<fstream>
#include<string>
#include <iomanip>
#include <iostream>
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

	//Sets string for user input
	string fileName;
	string fileTitle;

	//Ask for user input
	cout << "Enter the path to your input file, include file in path:";
	//Gets user input
	getline(cin, fileName);
	//Had an error where fin.open would overload, put actual fileName in seperate string
	//Takes last section of fileName to find file name
	fileTitle = fileName.c_str();

	//Opens file
	fin.open(fileTitle);

	//Setup variables to pull from file
	string FirstName;
	string LastName;
	double currentSalary = 0.0;
	double percentIncrease = 0.0;
	double updatedSalary = 0.0;

	//Set precision
	cout << setprecision(2);

	//Begin while loop
	//While loop pulls data from file and displays to console, also outputs to an output file
	while (!fin.eof()) {

		//Pulls variables from file
		fin >> LastName;
		fin >> FirstName;
		fin >> currentSalary;
		fin >> percentIncrease;

		//Displays to console pulled data
		cout << "Last Name:" << LastName << endl;
		cout << "First Name: " << FirstName << endl;
		cout << "Current Salary: " << fixed << currentSalary << endl;
		cout << "Percent Increase: " << fixed << percentIncrease << endl;

		//Calculates updated salary
		percentIncrease = percentIncrease / 100.0;
		updatedSalary = (currentSalary) * (1 + percentIncrease);

		//Outputs updated salary with fixed precision
		cout << "Updated Salary: " << fixed << updatedSalary << endl << endl;

		//Outputs variables to output file using "Append" function of output methods
		project4Out.open("project4Out.txt", ios::app);
		project4Out << "Last Name:" << LastName << endl;
		project4Out << "First Name: " << FirstName << endl;
		project4Out << "Current Salary: " << currentSalary << endl;
		project4Out << "Percent Increase: " << fixed << percentIncrease << endl << endl;

		//Closes file
		project4Out.close();
		
	}
	

	system("pause");

	return 0;
}