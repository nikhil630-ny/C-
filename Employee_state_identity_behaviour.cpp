#include<iostream>
using namespace std;

class employee
{
    private:
          //state
          int id;
          string name;
          int salary;

    public:
        //behaviour
        void setData(int i,string n,int s)
        {
            id=i;
            name=n;
            salary=s;
        }      
        void display()
        {
            cout<<"Employee ID="<<id<<endl;
            cout<<"Name="<<name<<endl;
            cout<<"Salary="<<salary<<endl;
        }
};
int main()
{
    //Identity
    employee e1,e2;
    
    e1.setData(101,"Shiva",30000);
    e2.setData(102,"Ram",40000);

    cout<<"First Employee:"<<endl;
    e1.display();
    cout<<"\nSecond Employee:"<<endl;
    e2.display();

    return 0;

}