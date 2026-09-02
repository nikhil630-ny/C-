#include<iostream>
using namespace std;
class animals
{
	public:
		  virtual void sound()=0;
		  virtual void walk()=0;
};
class Dog:public animals
{
	public:
		  void sound()
		  {
		  	cout<<"barking\n";
		  }
		  void walk()
		  {
		  	cout<<"running";
		  }
};
int main()
{
	Dog d;
	
	d.sound();
	d.walk();
	
	return 0;
}