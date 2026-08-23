#include<iostream>
#include<string>
using namespace std;
class bankaccount
{
	private:
		    double balance;
	protected:
		     string accounttype;
	public:
		   string accountholder;
		   
    void setbalance(double amount)
    {
    	balance=amount;
	}
	void setaccounttype(string type)
	{
		accounttype=type;
	}
	void display()
	{
		cout<<"Name:"<<accountholder<<endl;
		cout<<"balance:"<<balance<<endl;
		cout<<"account type:"<<accounttype<<endl;	
	}
};
int main()
{
	bankaccount myaccount;
	myaccount.accountholder="Nikhil";
	myaccount.setbalance(60000);
	myaccount.setaccounttype("current");
	myaccount.display();
	return 0;
}