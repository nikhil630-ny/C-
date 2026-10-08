#include<iostream>
#include<cstring>
using namespace std;
 class car
 {
    private:
           char gear[100];
           int speed;
    public: 
          void setData(const char g[],int s)
          {
            strcpy(gear,g);
            speed=s;
          }      
          void displayDetails()
          {
            cout<<"Gear:"<<gear<<endl;
            cout<<"speed limit:"<<speed<<"km/h"<<endl;
            cout<<"Object identity(memory address):"<<this<<endl;
            cout<<"*-------------------------------------------*"<<endl;
            
          }
 };
 int main()
 {

    car c1,c2,c3,c4,c5;

    c1.setData("1st Gear",30);
    c2.setData("2nd Gear",50);
    c3.setData("3rd Gear",70);
    c4.setData("4thGear",90);
    c5.setData("5th Gear",120);

    c1.displayDetails();
    c2.displayDetails();
    c3.displayDetails();
    c4.displayDetails();
    c5.displayDetails();

    return 0;
 }