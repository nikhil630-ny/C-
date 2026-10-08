/*example parameterized constructor*/
#include<iostream>
#include<cstring>
using namespace std;

class student
{
    private:
           int studentID;
           char name[50];
           char sec[20];
           int studentYear;
    public:
           student(const char n[],int id,const char s[],int year)
           {
            strcpy(name,n);
            studentID=id;
            strcpy(sec,s);
            studentYear=year;
            
           }       
           void display()
           {
            cout<<"Name="<<name<<endl;
            cout<<"student ID="<<studentID<<endl;
            cout<<"student Section="<<sec<<endl;
            cout<<"student Year="<<studentYear<<endl;
           }

};
int main()
{
    student s1("Nikhil yadav",97250319,"C",2);

    s1.display();
    return 0;
}