#include<iostream>
using namespace std;
class claculator
{
	public:
		  int addition(int a,int b)
		  {
		  	return a+b;
		  }
		  int subtraction(int a,int b)
		  {
		  	return a-b;
		  }
		  int multiplication(int a,int b)
		  {
		  	return a*b;
		  }
		  int division(int a,int b)
		  {
		  	return (float) a/b;
		  }
};
int main()
{
	claculator c;
	int a,b;
	
	cout<<"enter two element:";
	cin>>a>>b;
	
	cout<<"addition="<<c.addition(a,b)<<endl;
	cout<<"subtraction="<<c.subtraction(a,b)<<endl;
	cout<<"multiplication="<<c.multiplication(a,b)<<endl;
	cout<<"division="<<c.division(a,b)<<endl;
	
	return 0;
}