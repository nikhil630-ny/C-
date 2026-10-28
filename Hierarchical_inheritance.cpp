#include<iostream>
using namespace std;
class A
{
    public:
          void displayA()
          {
            cout<<"\nClass A";
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
class C:public A
{
    public:
           void displayC()
           {
            cout<<"\nClass C";
           }
};
int main()
{
    B obj1;
    C obj2;

    obj1.displayA();
    obj1.displayB();
 
    obj2.displayA();
    obj2.displayC();

    return 0;
}

