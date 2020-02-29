/*
Name: Sawyer Hannel
Date: 02/03/2020
Project 2
*/

#include <iomanip>
#include <string>
#include <iostream>
#include "Bank.h"
using namespace std;


int main() {
	double initialAmount, monthlyDep;
	int	annInterest, numOfYears;
	char answer = 'y';

	// While loop so user can keep trying different investment options
	while (answer == 'y' || answer == 'Y') {

		//print and get inputs
		cout << string(50, '-') << endl;
		cout << string(17, '-') << " Data Input " << string(21, '-') << endl;
		cout << "Initial Investment Amount: $";
		cin >> initialAmount;
		cout << "Monthly Deposit: $";
		cin >> monthlyDep;
		cout << "Annual Interest: %";
		cin >> annInterest;
		cout << "Number of years: ";
		cin >> numOfYears;
		system("pause");

		// print the class
		Bank newBank = Bank(&initialAmount, &monthlyDep, &annInterest, &numOfYears);
		newBank.printResults();
		cout << endl;
		cout << "Would you like to check a new investment? Hit Y for yes or anything else for no" << endl;
		cin >> answer;
		cout << endl;
	}
	return 0;
}