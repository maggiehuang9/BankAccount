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

void Account::balanceInquiry() {
	cout << "Account number: " << number << endl;
	cout << "Balance: " << balance << endl;
}

void Account::deposit(double amount) {
	balance += amount;
}

void Account::withdrawal(double amount) {
	balance -= amount;
}

void Account::closeAccount2(int accountTotal) {
	number = 0;
	balance = 0;
}

void Account::interestRate(double interestRate){
	balance = interestRate / 100 * balance + balance;
}

void Account::printAccounts() {
	cout << "Account number: " << number << endl;
	cout << "Balance: " << balance << endl;;
}

void Account::exit() {
	number = 0;
	balance = 0;
}



