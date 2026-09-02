#include<iostream>
using namespace std;

class car
{
	public:
		 char brand[20];
		 char model[20];
		 
		 void display()
		 {
		 	cout<<"Brand="<<brand<<endl;
		 	cout<<"Model="<<model<<endl;
		 }
};
int main()
{
	car c;
	
	cout<<"enter Brand:";
	cin>>c.brand;
	
	cout<<"enter model:";
	cin>>c.model;
	
	c.display();
	return 0;
}