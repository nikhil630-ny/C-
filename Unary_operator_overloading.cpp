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
           void display()
           {
            cout<<"Number="<<num;
           }  
           void operator-()
           {
            num= -num;
           }
};
int main()
{
    Number n1;
    n1.getData(10);
    cout<<"\nBefore over-loading:";
    n1.display();
    -n1;
    cout<<"\nAfter over-loading:";
    n1.display();
    return 0;
}