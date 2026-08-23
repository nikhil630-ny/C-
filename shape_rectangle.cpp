#include<iostream>
using namespace std;

class shape
{
	public:
		 void display()
		 {
		 	cout<<"This is shape."<<endl;
		 }
};
class rectangle: public shape
{
	public:
		   void show()
		   {
		   	 cout<<"This is rectangle."<<endl;
		   }
};
int main()
{
	rectangle r;
	r.display();
	r.show();
	return 0;
}