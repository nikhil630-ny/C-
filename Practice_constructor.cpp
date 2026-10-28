/*practice example of constructor*/
#include<iostream>
#include<string.h>
using namespace std;

class employee
{
    private:
           char name[20];
           int id;
           int salary;
    public:
        //parameterized constructor       
        employee(const char n[],int i,int s)
        {
          strcpy(name,n);
          id=i;
          salary=s;
        }
        employee(employee & e)
        {
            strcpy(name,e.name);
            id=e.id;
            salary=e.salary;
        }
        void display()
        {
            cout<<"Name="<<name<<endl;
            cout<<"ID="<<id<<endl;
            cout<<"Salary="<<salary<<endl;
        }
};
int main()
{
    employee e1("Sachin",101,30000);
    employee e2(e1);
    employee e3("Karan",102,45000);
    employee e4(e3);

    cout<<"---------Real things"<<endl; 
    e1.display();
    e3.display();

    cout<<"\n-----------Copy constructor"<<endl;
    e2.display();
    e4.display();

    return 0;

}