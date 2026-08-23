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
class circle:public shape
{
	public:
	void show()
	{
		cout<<"This is a circle."<<endl;
	}
};
int main()
{
	circle c;
	c.display();
	c.show();
	return 0;
}