#include<iostream>
using namespace std;
int main()
{
	int  n,first=0,second=1,next;
	cout<<"enter the number of terms:";
	cin>>n;
	for( int i=0;i<n;i++)
	{
		cout<<first<<"";
		next=first+second;
		first=second;
		second=next;
	}
	return 0;
}