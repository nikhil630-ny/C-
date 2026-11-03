#include<iostream>
using namespace std;

class A
{
    public:
          void show()
          {
            cout<<"This is class A";
          }
};
class B
{
    public:
           void display()
           {
            cout<<"\nThis is class B";
           }
};
class C
{
    public:
          void print()
          {
            cout<<"\nThis is class C";
          }
};
class D:public A,public B,public C
{
   public:
         void display()
         {
            cout<<"\nThis is class D";
         }
};
int main()
{
    D obj;

    obj.show();
    obj.print();
    obj.display();
    return 0;
}