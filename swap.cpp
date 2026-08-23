#include<iostream>
using namespace std;

int main()
{
	int a,b,temp;
	 cout<<"entre two number:";
	 cin>>a>>b;
	 
	 temp=a;
	 a=b;
	 b=temp;
	 
	 cout<<"A:"<<a<<endl;
	 cout<<"B:"<<b<<endl;
	 
	 return 0;
	 
}