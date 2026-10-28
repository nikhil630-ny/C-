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
           //copy constructor
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
    student s1(101,"Nikhil");//Normal object
    student s2(s1);//copy constructor
    
    cout<<"------First student"<<endl;
    s1.display();
    cout<<"\n------copy constructor"<<endl;
    s2.display();

    return 0;
}