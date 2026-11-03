#include<iostream>
using namespace std;

class A
{
    public:
          void show()
          {
            cout<<"This is base class\n";
          }
};
class B:private A
{
    public:
          void display()
          {
            show();//Base class function called here
            cout<<"This is Derived class";
          }
};
int main()
{
    B obj;

   // obj.show();
    obj.display();

    return 0;
}