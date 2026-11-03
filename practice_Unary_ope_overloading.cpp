#include<iostream>
using namespace std;

class Number
{
    private:
           int num;
    public:
           void getData(int n)
           {
            num=n;
           }      
           void operator -()
           {
            num = -num;
           }
           void display()
           {
            cout<<"Number="<<num;
           }  
};
int main()
{
    Number n1;
    n1.getData(20);
    cout<<"\nBefore Overloading:";
    n1.display();
    -n1;
    cout<<"\nAfter overloading:";
    n1.display();
    return 0;
}