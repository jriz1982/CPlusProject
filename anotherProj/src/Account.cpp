/*
 *      Author: Rich
 */
#include "Account.h"

//constructor
Account::Account()
{
	firstName = "No first Name ";
	lastName = "No last Name ";
	currentBalance = 0.00;
	//cout << " Constructor works! " << endl;
}
//overloaded constructor
Account::Account(string fName,string lName, double cBalance)
{
		firstName = fName;
		lastName = lName;
		currentBalance = cBalance;


}
//destructor
Account::~Account()
{

	cout << " Destructor works! " << endl;
}
//intakes a double and add to current balance
void Account::creditTo(double &in)
{
	currentBalance = currentBalance + in;

}
//Intakes a double and subtracts from current balance
void Account::debitFrom(double out)
{
	currentBalance = currentBalance - out;

}
//Prints current balance
void Account::printBalance()
{

	cout << currentBalance << endl;

}
//Prints account holders name
void Account::printName()
{

	cout << firstName << " " <<lastName << endl;
}



