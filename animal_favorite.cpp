#include<iostream>
using namespace std;
class animal
{
	public:
		   void sleep()
		   {
		   	cout<<"Animal are sleeping."<<endl;
		   }
		   void drink()
		   {
		   	cout<<"Animal drink water."<<endl;
		   }
		   void walking()
		   {
		   	cout<<"Animal are walking on th road."<<endl;
		   }
};
class Lion:public animal
{
	public:
		   void roar()
		   {
		   	cout<<"Lion is roar on the road."<<endl;
		   }
		   void hunt()
		   {
		   	cout<<"Tha lion has gone hunting."<<endl;
		   }
};
int main()
{
	Lion L;
	L.sleep();
	L.drink();
	L.walking();
	L.roar();
	L.hunt();
	return 0;
}