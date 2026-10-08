/*make a parameterized constructor  to automatically asing roll number to the 
student with respect to their name*/
#include<iostream>
using namespace std;

class student
{
    private:
           int roll;
           char name[20];
    
    public:
          student(const char n[])
          {
            static int r=101;//"static" is used in the program to automatically increase the roll number.

            int i=0;
            while(n[i]!='\0')
            {
                name[i]=n[i];
                i++;
            }
            name[i]='\0';
            roll=r;
            r++;
          }     
          void display()
            {
                cout<<"\nName:"<<name;
                cout<<"\nRoll number:"<<roll;
            }
};
int main()
{

    student s1("Nikhil");
    student s2("Rahul");
    student s3("Aman");
    student s4("Karan");
    student s5("Shivam");
    student s6("aanya");

    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    s6.display();

return 0;
}