#include<iostream>
using namespace std;

class mahendra
{
	public:
		   void display()
		   {
		   	 cout<<"there are many car ."<<endl;
		   }
};
class scarpio: public mahendra
{
	public:
		   void show()
		   {
		   	 cout<<"mahendra is parent class and scarpio is child class."<<endl;
		   }
};
int main()
{
	scarpio s;
	s.display();
	s.show();
	return 0;
	
}