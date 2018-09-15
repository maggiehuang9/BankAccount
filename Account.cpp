#include "stdafx.h"
#include "Account.h"
#include <iostream>
using namespace std;

//extern int accountTotal;

void Account::openAccount(int accountTotal)
{
	double initialDeposit;

	number = 1001 + accountTotal;
	cout << "Initial deposit?" << endl;
	cin >> initialDeposit;
	balance += initialDeposit;
	cout << "Account number: " << number << endl;
}

void Account::balanceInquiry(int accountTotal) {
	int accountNum;
	cout << "Account number? " << endl;
	cin >> accountNum;
	for (int i = 0; i < accountTotal; i++) {
		if (number == accountNum)
		{
			cout << "Account number: " << number << endl;
			cout << "Balance: " << balance << endl;
			break;
		}
	}
}

void Account::balanceInquiry() {
	cout << "Account number: " << number << endl;
	cout << "Balance: " << balance << endl;
}

void Account::deposit(int accountTotal) {
	int accountNum;
	double amount;
	cout << "Account number? " << endl;
	cin >> accountNum;
	for (int i = 0; i < accountTotal; i++) {
		if (number == accountNum)
		{
			cout << "Amount?" << endl;
			cin >> amount;
			balance += amount;
			cout << "Account number: " << number << endl;
			cout << "Balance: " << balance << endl;
			break;
		}
	}
}

void Account::deposit(double amount) {
	balance += amount;
}

void Account::withdrawal(int accountTotal) {
	int accountNum;
	double amount;
	cout << "Account number? " << endl;
	cin >> accountNum;
	for (int i = 0; i < accountTotal; i++) {
		if (number == accountNum)
		{
			cout << "Amount?" << endl;
			cin >> amount;
			if (amount <= balance) {
				balance -= amount;
				cout << "Account number: " << number << endl;
				cout << "Balance: " << balance << endl;
			}
			else
				cout << "Insufficient funds." << endl;
			break;
		}
	}
}

void Account::withdrawal(double amount) {
	balance -= amount;
}

void Account::closeAccount(int accountTotal) {
	int accountNum;
	cout << "Account number? " << endl;
	cin >> accountNum;
	for (int i = 0; i < accountTotal; i++) {
		if (number == accountNum)
		{
			accountTotal--;
			number = 0;
			balance = 0;
			break;
		}
	}
}

void Account::closeAccount2(int accountTotal) {
	number = 0;
	balance = 0;
}


void Account::interestRate(int accountTotal) {
	double interestRate;
	cout << "Interest rate?" << endl;
	cin >> interestRate;
	for (int i = 0; i < accountTotal; i++) {
		if (balance > 0)
		{
			balance = interestRate / 100 * balance + balance;
		}
	}
}

void Account::interestRate(double interestRate){
	balance = interestRate / 100 * balance + balance;
}

void Account::printAccounts() {
	cout << "Account number: " << number << endl;
	cout << "Balance: " << balance << endl;;
}

void Account:: exit(int accountTotal)
{
	for (int i = 0; i < accountTotal; i++) {
		if (number > 1000) {
			number = 0;
			balance = 0;
		}
	}
	std::exit(0);
}

void Account::exit() {
	number = 0;
	balance = 0;
}



