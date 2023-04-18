//For CS-210 Kody Greenberg 11/23/22 Source.cpp

//include statements
#include <iostream>
#include "CalculateInterest.h"
#include <vector>
#include <conio.h>
#include <iomanip>

using namespace std;

InterestCalc InitialDisplay(InterestCalc inputData) {
	// print inital requests and receive input
	double deposit;
	double monthly;
	double interest;
	int years;
	cout << "*******************************" << endl;
	cout << "******* Input Your Data *******"<< endl;
	cout << "Initial Investment Amount: $";
	//user inputs initial deposit amount
	cin >> deposit;
	//number check to ensure a double/int was input
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Bad entry. Enter a NUMBER: ";
		cin >> deposit;
	}
	inputData.setInitialDeposit(deposit);

	//user inputs monthly deposit amount
	cout << "Monthly Deposit: $";
	cin >> monthly;
	//number check to ensure a double/int was input
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Bad entry. Enter a NUMBER: ";
		cin >> monthly;
	}
	inputData.setMonthlyDeposit(monthly);

	//user inputs annual interest amount
	cout << "Annual Interest: %";
	cin >> interest;
	//number check to ensure a double/int was input
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Bad entry. Enter a NUMBER: ";
		cin >> interest;
	}
	inputData.setPercentInterest(interest);

	//user inputs years
	cout << "Number of years: ";
	cin >> years;
	//number check to ensure a double/int was input
	while (cin.fail()) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Bad entry. Enter a NUMBER: ";
		cin >> years;
	}
	inputData.setNumberYears(years);
	cout << "Press any key to continue..." << endl;
	return inputData; 
}
int main() {
	char ch; // For detecting a keystroke.

	cout << "Welcome to the Airgead investing program. \nPlease input how much you plan to invest initially, then monthly, the percentage of interest the account has, and number of years you want to invest. \nWe will calculate the compound interest of each month and then show closing balance after each year." << endl;
	do {
		//Display the initial view and receive input
		InterestCalc inputData;
		inputData = InitialDisplay(inputData);
		//Listen for a keystroke to continue
		ch = _getch();
		// Display the report excluding the monthly deposits
		inputData.showReport(0);
		cout << endl << endl;
		// Display the report with the monthly deposits
		inputData.showReport(inputData.getMonthlyDeposit());
		cout << "\n\n";
		cout << "If you would like to continue press any key besides X." << endl;
		cout << "If you are finished press 'X' to exit the program." << endl;
		ch = _getch();
		if (ch == 'x' || ch == 'X') {
			exit(EXIT_SUCCESS);
		}
	} while (ch != NULL);
}