#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account
{
public:
	
		int number;
		double balance;
		void openAccount(int accountTotal);
		void balanceInquiry(int accountTotal);
		void balanceInquiry();
		void deposit(int accountTotal);
		void deposit(double amount);
		void withdrawal(int accountTotal);
		void withdrawal(double amount);
		void closeAccount(int accountTotal);
		void closeAccount2(int accountTotql);
		void interestRate(int accountTotal);
		void interestRate(double interestRate);
		void printAccounts(int accountTotal);
		void printAccounts();
		void exit(int accountTotal);
		void exit();
	};
	
#endif

