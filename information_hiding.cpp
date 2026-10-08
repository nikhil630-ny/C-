#include<iostream>
#include<string.h>
using namespace std;

class student
{
	private:
		char name[20];
		int age;
	public:
		void setDetails(char studentName[],int studentAge)
		{
			strcpy(name,studentName);
			age=studentAge;
		}
		void displayDetails()
		{
			cout<<"student Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
		}
};
int main()
{
	student s1;
	s1.setDetails("Nikhil",20);
	s1.displayDetails();
	return 0;
}