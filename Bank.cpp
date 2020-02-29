#include "Bank.h"
#include <iomanip>
#include <string>
#include <iostream>
using namespace std;

//Constructor 
Bank::Bank(double* initial, double* monthDep, int* interest, int* numOfYears) {
	init = *initial;
	monthD = *monthDep;
	inter = *interest;
	years = *numOfYears;
}

void Bank::printResults() {

	//Without the monthly deposit
	total = init;
	cout << endl << fixed << setw(60) << " Balance and Interest without additional Monthly Deposits" << endl;
	cout << string(60,'=') << endl;
	cout << string(4, ' ') << "Year" << string(4, ' ') << "Year End Balance" << string(4, ' ');
	cout << "Year End Earned Interest" << endl;
	cout << string(60, '=') << endl;
	for (int i = 1; i <= years; i++) {
		yearEndEarn = total * ((inter/100.0));
		yearEndWO = total + yearEndEarn;
		cout << setprecision(2) << string(4, ' ') << i << string(14, ' ') << "$" << yearEndWO << string(16, ' ');
		cout << "$" << yearEndEarn << endl;
		total = yearEndWO;
	}

	//With the monthly deposit
	total = init + (monthD * 12);
	cout << endl << fixed << setw(60) << " Balance and Interest with additional Monthly Deposits" << endl;
	cout << string(60, '=') << endl;
	cout << string(4, ' ') << "Year" << string(4, ' ') << "Year End Balance" << string(4, ' ');
	cout << "Year End Earned Interest" << endl;
	cout << string(60, '=') << endl;
	for (int i = 1; i <= years; i++) {
		yearEndEarn = total * ((inter / 100.0));
		yearEndBal = total + yearEndEarn;
		cout << setprecision(2) << left << string(4, ' ') << i << string(14, ' ') << "$" << yearEndBal << string(16, ' ');
		cout << "$" << yearEndEarn << endl;
		total = yearEndBal + (monthD * 12);
	}

}
