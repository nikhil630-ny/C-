#include<iostrem>
#include<cstring>
using namespace std;

class car
{
    private:
           char gear[100];
           int speed;

    public: 
           void setdata(const char g[],int s)
           {
            strcpy (gear,g);
            speed=s;
           }      
           void displaydetails()
           {
            cout<<"Gear:"<<gear<<endl;
            cout<<"speed limit:"<<speed<<"km/h"<<endl;
            cout<<"object identity(memory address):"<<this<<endl;
            cout<<"*-----------------------------------------*"<<endl;
           }
};
int main()
{
    car c1,c2,c3,c4;

    c1.setdata("1st gear",30);
    c2.setdata("2nd  gear",50);
    c3.setdata("3rd gear",70);
    c4.setdata("4th gear",90);

    c1.displaydetails();
    c2.displaydetails();
    c3.displaydetails();
    c4.displaydetails();
    retunr 0;
}
