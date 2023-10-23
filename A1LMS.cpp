/*. 1.Bank Account Abstraction: Create a C++ program that models a bank account using OOP principles. 
Create a BankAccount class with methods to deposit, withdraw, and check the balance while abstracting the internal details.
Private the bank balance.*/
#include<iostream>
using namespace std;
class BankAccount{
	int balance=10000;

public:
	void getBalance(int b)
	{
		balance=b;
		
	}
	 int   deposit(int d)
		{
		//	this->balance=balance;
			return balance+d;
		}
};
int main()
{
	BankAccount ob;
//	ob.deposit(333);
	cout<<"Balance="<<ob.deposit(333);
 return 0;
 
	
}
