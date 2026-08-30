#include<iostream>
using namespace std;

class Bankaccount
{
	private:
		   float balance;
	
	public:
		  void deposite(float amount)
		  {
		  	balance=balance+amount;
		  }
		  void displayBalance()
		  {
		  	cout<<"Balance="<<balance;
		  }
};
int main()
{
	Bankaccount b;
	b.deposite(5000);
	b.displayBalance();
	return 0;
}