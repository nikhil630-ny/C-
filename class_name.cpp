#include<iostream>
using namespace std;
class class_name
{
	private:
		   int r;
	protected:
	          int u;
	public:
	       int n;	   
};
int main()
{
   class_name object_name;
   object_name.n=10;
   cout<<object_name.n;
   return 0;
}