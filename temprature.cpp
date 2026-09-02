#include<iostream>
using namespace std;

class temprature
{
	private:
		   float celsius;
		   
		   public:
		   	     void settemprature(float c)
		   	    {
		   	      celsius=c;	
				}
				void displaytemprature()
				{
					cout<<"temprature:"<<celsius<<char(248)<<"C";//248 is the ascii value of degree 
				}
};
int main()
{
	temprature t;
	int temp;
	
	cout<<"enter temprature:";
	cin>>temp;
	
	t.settemprature(temp);
	t.displaytemprature();
	
	return 0;
}