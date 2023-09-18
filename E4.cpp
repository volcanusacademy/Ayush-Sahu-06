/*4)Create a C++ class BankAccount with a private field balance. Implement public methods
 for depositing and withdrawing funds while encapsulating the balance field*/
 #include<iostream>
#include<string>
using namespace std;
class Bank
{
   	int balance=2000;

public:
void setwithdraw(int b)
{
	balance=b;
}
int getwithdraw(int w)
{
	return balance-w;
}
void setdeposit(int b)
{
	balance=b;
}
int getdeposit(int w)
{
	return balance+w;
}
};
int main()
{
	Bank b;
//	b.setwithdraw(2000);
cout<<b.getwithdraw(200)<<endl;
cout<<b.getdeposit(3333);
	return 0;
}