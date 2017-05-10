//============================================================================
// Author      : Richard Brown
//============================================================================
#include "Account.h"
#include <iostream>

using namespace std;

		//Part D: Question 1. C++ Templates. Write an example of a generic function that can swap 2 generic elements.

 // Generic template class that can take in 2 generic elements and swaps them.
template <class T>
 T swapElements(T &a, T &b)
{
	cout << "Before swap a is now =" << a << endl;
	cout << "Before swap b is now =" << b << endl;

	int c;
	c = a;
	a = b;
	b = c;

	cout << "After swap a is now =" << a << endl;
	cout << "After swap b is now =" << b << endl;

	return 0;

}

int main() {
	cout << "!This area is working!" << endl; // prints !This area is working!
	 //iniates variables for swap
		 int e = 14;
		 int f = 20;

		 //swap function that takes 2 generic functions and swaps them.
		 swapElements(e, f);

		 double g = 25.6;
		 double h = 8.8;
		 // example of double being swapped.
		 swapElements(g, h);



		 //Question 5: instantiate an object of type account with $100 starting balance belonging to Bo Jackson

		// instantiates an object of the Account class called "a"
		 Account a;
		 string fst = "Bo ";
		 string lst = "Jackson ";

		 //invokes the overloaded contructor
		 Account b(fst, lst, 100.00);
		 //prints Bo Jackson or first and last name of initiated variables
		 b.printName();
		 cout << "has a current balance of ";
		 b.printBalance(); //prints account balance($100)
		 cout << endl;

		 //Part C: Question 1, Write Code using heap allocated Pointers...

	//Dynamic allocated Memory for Account class
		 Account * acc = new Account();

		 //instantiated Pointer variables
		 acc->firstName = "Chad ";
		 acc->lastName = "Johnson ";


		 double addIn = 70.0;
		 //instantiated balance in Chad's account
		 acc->currentBalance = 200.00;
		 acc->debitFrom(20.0);
		 acc->creditTo(addIn);
		 acc->printName();
		 cout << "has a current balance of ";
		 acc->printBalance();

		 delete acc;


		 //Part C: Question 2 Create 10 accounts using an array with id's 0-9...


		 //Dynamically allocates 10 array accounts
		 Account *pAcct = new Account[10];


		 for (int i = 0; i < 10; i++) {
			 cout << "Acct " << i << endl;

			 pAcct[i].currentBalance = 100;
			 pAcct[i].printBalance();
		 }

		 int selection = 0;
		 int userId = NULL;
		 double amount = 0;

		 while (true) {
			 cout << " MAIN MENU " << endl;
			 cout << "Enter Your User I.D (0 - 9) " << endl;
			 cin >> userId;
			 cout << "Thank you for your entry ";
			 cout << "Now Please Select an option 1-4 to begin " << endl;
			 cout << "Press 1 for WITHDRAWAL " << endl;
			 cout << "Press 2 for DEPOSIT " << endl;
			 cout << "Press 3 for BALANCE " << endl;
			 cout << "Press 4 to EXIT " << endl;

			 cin >> selection;

			 switch (selection) {
			 case 1:
				 cout << "Withdrawal How Much? " << endl;
				 cin >> amount;
				 //Debit user defined amount from selected account.
				 pAcct[userId].debitFrom(amount);
				 break;
			 case 2:
				 cout << "Deposit How much? " << endl;
				 cin >> amount;
				 //Add user defined amount to selected account.
				 pAcct[userId].creditTo(amount);
				 break;
			 case 3:
				 cout << "Account number " << endl;
				 pAcct[userId];
				 cout << "Has a Balance of " << endl;
				 //Print Balance of selected user.
				 pAcct[userId].printBalance();
				 break;
			 case 4:
				 cout << "Exiting the Menu " << endl;
				 break;

			 }
			 cout << endl;
			 cout << endl;
			 cout << endl;
		 }

		 //delete pAcct;

	return 0;
}
