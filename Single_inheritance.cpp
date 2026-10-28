#include<iostream>
using namespace std;

class A
{
  public:
        void displayA()
        {
          cout<<"Class A";
        }
};
class B:public A
{    
    public:
           void displayB()
           {
             cout<<"\nClass B";
           } 
};
int main()
{
     B obj;

     obj.displayA();
     obj.displayB();

     return 0;
}
