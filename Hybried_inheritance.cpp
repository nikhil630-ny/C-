#include<iostream>
using namespace std;

class A
{
  public:
         void displayA()
         {
            cout<<"Class A\n";
         }  
};
class B :public A
{
    public:
           void displayB()
           {
            cout<<"Class B\n";
           }
};
class C:public A
{
    public:
           void displayC()
           {
            cout<<"Class C\n";
           }
};
class D:public B,public C
{
    public:
           void displayD()
           {
            cout<<"Class D\n";
           }
};
int main()
{
    D obj;
    obj.displayB();
    obj.displayC();
    obj.displayD();

    return 0;
}
