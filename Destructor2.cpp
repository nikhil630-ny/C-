#include<iostream>
using namespace std;

 class student
 {
    public:
          student()
          {
            cout<<"Hello"<<endl;
          }
         ~student()
          {
            cout<<"Bye"<<endl;
          }
 };
 int main()
 {
    student s;

    cout<<"My work"<<endl;

    return 0;
 }