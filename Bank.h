#include <iomanip>
#include <string>
#include <iostream>
using namespace std;
class Bank
{
	//Class Declaration of variables and functions
public:
	Bank(double* initial, double* monthDep, int* interest, int* numOfYears);
	void printResults();
private:
	int Months, inter, years;
	double total = 0.0, init, monthD, yearEndBal = 0.0, yearEndEarn = 0.0;
	double yearEndWO = 0.0;
};

