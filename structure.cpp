#include<iostream>
using namespace std;
struct student
{
	char name [20];
	int id;
	char address[50];
};
int main()
 {
 	student s;
 	cout<<"enter student name : ";
 	cin>>s.name;
 	cout<<"enter student id:";
 	cin>>s.id;
 	cout<<"enter student address:";
 	cin>>s.address;
 	cout<<"\n student details\n";
 	cout<<"name:"<<s.name<<endl;
 	cout<<"id:"<<s.id<<endl;
 	cout<<"address:"<<s.address<<endl;
 	return 0;
 }