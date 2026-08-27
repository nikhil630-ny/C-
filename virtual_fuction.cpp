#include<iostream>
using namespace std;
class shape
{
	 public:
	 	    virtual void area()=0;
};
class circle:public shape
{
	public:
		   void area()
		   {
		   	float pi=3.14,r=5;
		   	cout<<"area of circle="<<pi*r*r<<endl;
		   }
};
class rectangle:public shape
{
	public:
		   void area()
		   {
		   	float lenght=5,breath=15;
		   	cout<<"area of reatcangle="<<lenght*breath<<endl;
		   }
};
int main()
{
	circle c;
	rectangle r;
	c.area();
	r.area();
	return 0;
}