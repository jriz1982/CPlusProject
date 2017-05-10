/*
 * account.h
 *
 *  Created on: May 9, 2017
 *      Author: Rich
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string>


using namespace std;

			//Question 1 Create class definition for object called Account
class Account {


public:
			//--Question 1:add constructor

	//Constructor
	 Account();
	 Account(string ,string,double);

			//--Question 1:add destructor

	//Destructor
	~Account();

			//--Question 3: add two methods which take a double

	//takes a double and adds amount into balance
	void creditTo(double&);
	//takes a double and subtracts amount from balance
	void debitFrom(double);

			//--Question 6: show how you would create const members function

	void printBalance();

	//prints first and last name
	void printName();


			//--Question 2: Add 2 internal data members of char or string.(I chose string)
	string firstName;
	string lastName;

			//--Question 4: add internal data member called currentBalance of type double.
	double currentBalance;
private:

};

#endif /* ACCOUNT_H_ */
