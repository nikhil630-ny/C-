/*Parameterized constructor example*/
#include<iostream>
using namespace std;

class subject
{
    private:
            int a,b;
    public:
          subject(int x,int y)
          {
            a=x;
            b=y;
            cout<<"Parameterized constructor called"<<endl;
          }        
};
int main()
{
   // subject s1;
    subject s1(1,2);
    return 0;

}