#include<iostream>
using namespace std;
int recursion(int n)
{
	if(n==1)
	return 1;
	return n*recursion(n-1);
}
int recursionSum(int n)
{
	if(n==0)
	return 0;
	return n+recursion(n-1);
}
int main()
{
	int n;
	cout<<"enter the number:";
	cin>>n;
	cout<<"factorial="<<recursion(n)<<endl;
	cout<<"sum of n term:"<<recursionSum(n);
	return 0;
}
