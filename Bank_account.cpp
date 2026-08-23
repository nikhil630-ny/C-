#include<iostream>
using namespace std;

class bank
{
	public:
		   void bankname()
		   {
		   	 cout<<"this is union bank of india."<<endl;
		   }
};
class account:public bank
{
	public:
		 void accounttype()
		 {
		  cout<<"this is a saving account."<<endl;
		 }
};
int main()
{
	account a;
	a.bankname();
	a.accounttype();
	return 0;
}