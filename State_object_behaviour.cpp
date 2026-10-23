#include<iostream>
using namespace std;

class student
{
    private:
      //state
      int rollNo;
      string name;
      int marks;

    public:
      //Behaviour
      void setData(int r,string n,int m)
      {
        rollNo=r;
        name=n;
        marks=m;
      }  
      void display()
      {
        cout<<"Roll Number="<<rollNo<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Marks="<<marks<<endl;
      }
};
int main()
{
    //Identity
    student s1,s2;
    
    s1.setData(101,"rahul",85);
    s2.setData(102,"Karan",90);
    
    cout<<"First student:"<<endl;
    s1.display();

    cout<<"\nSecond student:"<<endl;
    s2.display();
    return 0;
}
