/****
Name:Isaac Bennett
Description:Final Project a adventure Game program
****/

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

int main() {
	//Sets input variable
	ifstream fin;

	string fileName;
	//fileName = "C:\Users\Studious\Desktop\roomLayout.txt";
	string fileTitle;
	fileTitle = fileName.c_str();
	fin.open("roomLayout.txt");

	int doorN = 0;
	int doorS = 0;
	int doorE = 0;
	int doorW = 0;
	//fin >> doorN;
	//cout << doorN << endl;
	while (!fin.eof()){

		fin >> doorN;
		fin >> doorS;
		fin >> doorE;
		fin >> doorW;

		cout << doorN << " " << doorS << " " << doorE << " " << doorW << endl;
	}
	

	bool playerQuit = true;
	string playerName;


	/*while (playerQuit != true) {





	}*/






	system("pause");
	return 0;
}
