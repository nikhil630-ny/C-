/*Destructor example*/
#include<iostream>
using namespace std;

class student
{
    public:
          student()
          {
            cout<<"Constructor call"<<endl;
          }
          ~student()
          {
            cout<<"Destructor call"<<endl;
          }
};
int main()
{
    student s;

    cout<<"Inside main function"<<endl;

    return 0;
}

