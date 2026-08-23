#include<iostream>
using namespace std;

class employee
{
	public:
		   void work()
		   {
		   	cout<<"Employee is working."<<endl;
		   }
};
class manager: public employee
{
	public:
		void manage()
		  {
		  	cout<<"manager manages the team."<<endl;
		  }
};
int main()
{
	manager m;
	m.work();
	m.manage();
	return 0;
}