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
class B
{
    public:
           void displayB()
           {
            cout<<"\nClass B";
           }
};
class C:public A,public B
{
    public:
          void displayC()
          {
            cout<<"\nClass C";
          }
};
int main()
{
    C obj;
    
    obj.displayA();
    obj.displayB();
    obj.displayC();

    return 0;
}
