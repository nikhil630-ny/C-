/*copy constructor*/
#include<iostream>
#include<string.h>
using namespace std;

class student
{
    private:
           int rollNo;
           char name[20];
    public:
          //parameterized constructor
          student(int r,const char n[])
          {
            rollNo=r;
            strcpy(name,n);
          }       
          //copy  constructor
          student(student & s)
          {
            rollNo=s.rollNo;
           strcpy(name,s.name);
          }
          void display()
          {
            cout<<"Roll number="<<rollNo<<endl;
            cout<<"Name="<<name<<endl;
          }
};
int main()
    {
     student s1(101,"nikhil");//normal object
     student s2(s1);//copy constructor

     s1.display();
     s2.display();
     return 0;
    }
