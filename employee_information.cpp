#include<iostream>
using namespace std;
 
 class employee
 {
 	public:
 		  char name[20];
 		  float salary;
 		  
 		  void display()
 		  {
 		  	cout<<"Name="<<name<<endl;
 		  	cout<<"salary="<<salary<<endl;
		  }
 };
 int main()
 {
 	employee e;
 	
 	cout<<"enter employee name:";
 	cin>>e.name;
 	
 	cout<<"enter salary:";
 	cin>>e.salary;
 	
 	e.display();
 	return 0;
 }