#include<iostream>
using namespace std;

class animal
{
	public:
		   void eat()
		   {
		   	cout<<"animal eats food.."<<endl;
		   }
};
class Dog:public animal
{
	public:
		   void bark()
		   {
		   	cout<<"Dog  barks."<<endl;
		   }
};
int main()
{
	
	Dog d;
	
	d.eat();
	d.bark();
	return 0;
}