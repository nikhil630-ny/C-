#include<iostream>
#include<string.h>
using namespace std;

class employee
{
    private:
           
           char name[20];
           int id;
    public:
          employee(const char n[],int x)
          {
            strcpy(name,n);
            id=x;
          }  
          employee(employee & e)
          {
            strcpy(name,e.name);
            id=e.id;
          }     
          void display()
          {
            cout<<"\nName:"<<name<<endl;
            cout<<"Employee ID:"<<id<<endl;
          }
};
int main()
{
    employee e1("Nikhil yadav",101);
    employee e2(e1);
    employee e3(e2);

    cout<<"\nOriginal value:";
    e1.display();

    cout<<"\n\nFirst copied value:";
    e2.display();

    cout<<"\n\nSecond copied value:";
    e3.display();

    return 0;
}