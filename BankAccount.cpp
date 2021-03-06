// BankAccount.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Account.h"
using namespace std;


Account a;

int accountTotal = 0;
Account account[100];

int main()
{
	for (;;) {
		char transactionType;
		cout << "Transaction type?" << endl;
		cin >> transactionType;
		transactionType = toupper(transactionType);
		if (transactionType == 'O') {
			if (accountTotal < 100) {
				account[accountTotal].openAccount(accountTotal);
				accountTotal++;
			}
		} 
		else if (transactionType == 'B') {
			int accountNum;
			cout << "Account number? " << endl;
			cin >> accountNum;
			for (int i = 0; i < accountTotal; i++) {
				if (account[i].number == accountNum)
				{
					account[i].balanceInquiry();
					break;
				}
			}
		}
		else if (transactionType == 'D') {
			int accountNum;
			double amount;
			cout << "Account number? " << endl;
			cin >> accountNum;
            cout << "Amount?" << endl;
			cin >> amount;
			for (int i = 0; i < accountTotal; i++) {
				if (account[i].number == accountNum)
				{
					account[i].deposit(amount);
					break;
				}
			}
		}
		else if (transactionType == 'W') {
			int accountNum;
			double amount;
			cout << "Account number? " << endl;
			cin >> accountNum;
			for (int i = 0; i < accountTotal; i++) {
				if (account[i].number == accountNum)
				{
					cout << "Amount?" << endl;
					cin >> amount;
					if (amount <= account[i].balance) {
						account[i].withdrawal(amount);
					}
					else
						cout << "Insufficient funds." << endl;
					break;
				}
			}
		}
		else if (transactionType == 'C') {
			int accountNum;
			cout << "Account number? " << endl;
			cin >> accountNum;
			for (int i = 0; i < accountTotal; i++) {
				if (account[i].number == accountNum)
				{
					account[i].closeAccount2(accountTotal);
					accountTotal--;
					break;
				}
			}
		}

		else if (transactionType == 'I') {
			double interestRate;
			cout << "Interest rate?" << endl;
			cin >> interestRate;
			for (int i = 0; i < accountTotal; i++) {
				if (account[i].balance > 0)
				{
					account[i].interestRate(interestRate);
				}
			}
		}
		else if (transactionType == 'P') {
			for (int i = 0; i < accountTotal; i++) {
				if (account[i].number > 1000) {
					account[i].printAccounts();
				}
			}
		}
		else if (transactionType == 'E') {
			for (int i = 0; i < accountTotal; i++) {
				if (account[i].number > 1000) {
					account[i].exit();
				}
			}
			std::exit(0);
		}
		else
			cout << "Not a valid type." << endl;
	}
	
    return 0;
}


