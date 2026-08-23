#include<iostream>
using namespace std;
int area(int side);
int area(int length,int breath,int height);
int area(int side)
{
	return 6*side*side;
}
int area(int length,int breath,int height)
{
	return 2*(length*breath+breath*height+length*height);
}
int main()
{
	int side,l,b,h;
	cout<<"enter the side of cube:";
	cin>>side;
	cout<<"area of cube="<<area(side)<<endl;
	cout<<"enter length,breath,height:";
	cin>>l>>b>>h;
	cout<<"area of cubidol:"<<area(l,b,h)<<endl;
	return 0;
}