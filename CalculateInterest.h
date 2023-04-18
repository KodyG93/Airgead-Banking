//For CS-210 Kody Greenberg 11/23/22 CalculateInterest.h

//def statements
#ifndef CS_210_Airgead_Banking_Files_CalculateInterest_H_
#define CS_210_Airgead_Banking_Files_CalculateInterest_H_
#pragma once

class InterestCalc{
public:InterestCalc(); // Default constructor declaration
	// Setters and Getters
	void setInitialDeposit(double t_initialDeposit);
	void setMonthlyDeposit(double t_monthlyDeposit);
	void setPercentInterest(double t_percentInterest);
	void setNumberYears(int t_numberYears);
	double getInitialDeposit();
	double getMonthlyDeposit();
	double getPercentInterest();
	int getNumberYears();
	//function to calculate monthly balance
	double monthlyBalance(int t_months, double t_monthDeposit);
	//function to calculate monthy interest
	double monthlyInterest(int t_months, double t_monthDeposit);
	//function to calculate annual balance
	double annualBalance(int t_numYears, double t_depositAmount);
	//function to calculate annual interest
	double annualInterest(int t_numYears, double t_depositAmount);
	//function to display data
	void showReport(double t_monthlyDep);

private: 
	double m_initialDeposit;
	double m_monthlyDeposit;
	double m_percentInterest;
	int m_numberYears;
};
#endif // CS_210_Airgead_Banking_Files_CalculateInterest_H_
