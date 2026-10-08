#include<iostream>
#include<cstring>
using namespace std;

class car
{
    private:
           char brand[20];
           int speed ;
        
    public: 
          void setData(const char b[],int s)
          {
            strcpy(brand,b);
            speed=s;
          }      
          void accelerate(int increment)
          {
            speed +=increment;//modifies the object's state
          }
          void displayDetails()
          {
            cout<<"Car:"<<brand<<"|speed:"<<speed<<"km/h"<<endl;
            //IDENTITY:printing the memory address of the object using 'this'
            cout<<"object Idetity(memory address):"<<this<<"\n"<<endl; 
          }
};
 int main()
 {
    car c1;
    car c2;

    c1.setData("toyota",60);
    c2.setData("toyota",60);
// 1. changing state via behavior
    c1.accelerate(20);
    //2.observing state ,behavior,and identity
    c1.displayDetails();
    c2.displayDetails();
    return 0; 
}
