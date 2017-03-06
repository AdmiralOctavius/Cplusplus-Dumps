/*
Array Calculation file
Calculates: Median, Average, Max, Min, Variance + Standard Variation
*/
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main() {

	int num_vals = 5;
	vector<int> userVals(num_vals);
	int i = 0;
	int userSum = 0;
	int userNumAmt = 0;
	double userMedian = 0;
	double userMean = 0;
	double userAvg = 0;
	int userMax = 0;
	int userMin = 0;
	vector<double> userVariance(num_vals);
	double userVarianceFinal = 0;
	double userVarianceTotal = 0;
	double userStandardDev = 0;
	//User inputted Values
	cout << "Please enter 5 numbers:";
	for (i = 0; i < num_vals; i++) {

		cin >> userVals.at(i);
	}

	for (i = 0; i < num_vals; i++) {

		cout << "Number " << i << " is: " << userVals.at(i) << endl;

	}

	//Find median
	//Need to sort array through
	for (i = 0; i < num_vals; i++) {

		userSum = userVals.at(i) + userSum;
		userNumAmt++;
	}

	//Find Average
	for (i = 0; i < num_vals; i++) {

		userSum = userVals.at(i) + userSum;
		userNumAmt++;
	}
	userAvg = userSum / userNumAmt;
	cout << "Average is: " << userAvg << endl;

	//Find Max
	i = 0;
	userMax = userVals.at(i);
	for (i = 0; i < num_vals; i++) {
		if (userVals.at(i) > userMax) {
			userMax = userVals.at(i);
		}
		else {
			
		}
	}
	cout << "User max is: " << userMax << endl;

	//Find Min
	i = 0;
	userMin = userVals.at(i);
	for (i = 0; i < num_vals; i++) {
		if (userVals.at(i) < userMin) {
			userMin = userVals.at(i);
		}
		else {

		}
	}
	cout << "User min is: " << userMin << endl;

	//Find Standard Deviation
	//First do calc here
	for (i = 0; i < num_vals; i++) {
		userVariance.at(i) = pow((userVals.at(i) - userAvg), 2);

		// userVariance = userVarianceTotal / (userNumAmt - 1)
	}

	//Then add calculations
	for (i = 0; i < num_vals; i++) {
		userVarianceTotal = userVarianceTotal + userVariance.at(i);
	}

	//Then do final calculation
	userVarianceFinal = userVarianceTotal / (userNumAmt);

	cout << "User Variance is: " << userVarianceFinal << endl;

	//Finally do Standard Deviation
	userStandardDev = pow(userVarianceFinal, 0.5);
	cout << "User Standard Deviation is: " << userStandardDev << endl;

}