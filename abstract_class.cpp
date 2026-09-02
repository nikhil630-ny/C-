#include<iostream>
using namespace std;
class animals{
	public:
		virtual void eat()=0;
		virtual void walk()=0;
};
class ant:public animals
{
	public:
		void eat()
		{
			cout<<"chini\n";
		}
		void walk()
		{
			cout<<"crawlling";
		}
};
int main()
{
	ant a;
	
	a.eat();
	a.walk();
	
	return 0;
}
