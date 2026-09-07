#include<iostream>
using namespace std;

int main()
{
	int n,rem,rev=0,value;
	
	cout<<"enter a number:";
	cin>>n;
	value=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(value==rev)
	 cout<<"Palindrome Number";
	 else
	  cout<<"Not a Palindrome number";
	  
	  return 0;
}