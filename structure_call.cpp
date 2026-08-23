#include<iostream>
using namespace std;
struct address
{
	int plot_no;
	char locality[50];
};
 struct Data{
 	char name[50];
 	int id;
 	 struct address A1;
 };
  int main()
  {
  	Data s;
  	cout<<"enter name:";
  	cin>>s.name;
  	
  	cout<<"enter id:";
  	cin>>s.id;
  	
  	cout<<"enter plot number:";
  	cin>>s.A1.plot_no;
  	
  	cout<<"enter locality:";
  	cin>>s.A1.locality;
  	
  	cout<<"\n-----------student details---------------\n"<<endl;
  	cout<<"name:"<<s.name<<endl;
  	cout<<"id:"<<s.id<<endl;
  	cout<<"plot no:"<<s.A1.plot_no<<endl;
  	cout<<"locality:"<<s.A1.locality<<endl;
  	return 0;
  } 