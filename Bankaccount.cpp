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
    	   string accountholdername;
    	   
    void setbalance(double ammount) 
    {
    	balance=ammount;
	}
	void setaccounttype(string type)
	{
		accounttype=type;
	}
	void display()
	{
		cout<<"Name:"<<accountholdername<<endl;
		cout<<"balance:"<<balance<<endl;
		cout<<"account tyep:"<<accounttype<<endl;
	}
};
int main()
{
	bankaccount myaccount;
	myaccount.accountholdername="amit";
	myaccount.setbalance(50000);
	myaccount.setaccounttype("saving");
	myaccount.display();
	return 0;
}