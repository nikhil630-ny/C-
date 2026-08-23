#include<iostream>
using namespace std;
int fib(int r);
int main()
{
	int r,i;
	cout<<"enter the range:";
	cin>>r;
	
	//cout<<"fibonacci series:";
	for(i=0;i<r;i++)
	{
		cout<<fib(i);//function call
		
	}
	cout<<"fibnacci series:";
	return 0;
}
int fib(int r)
{
	if(r==0)
	return 0;
	if(r==1)
	return 1;
	return fib(r-2)+fib(r-1);
}