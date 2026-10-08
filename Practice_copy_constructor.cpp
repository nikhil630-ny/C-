/*practice copy constructor*/
#include<iostream>
#include<string.h>
using namespace std;

class student
{
    private:
           int rollNo;
           char name[20];
    public:
          //parametrized constructor
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
            cout<<"Roll number:"<<rollNo<<endl;
            cout<<"Name:"<<name<<endl;
          }
};
int main()
    {
        student s1(102,"Nikhil yadav");
        student s2(s1);
        
        cout<<"First object:"<<endl;
        s1.display();
        cout<<"\nCopied object:"<<endl;
        s2.display();

        return 0;

    }
