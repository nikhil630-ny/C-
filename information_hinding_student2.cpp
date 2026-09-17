#include<iostream>
using namespace std;

class student
{
	private:
		int marks;//hidden marks
		char name[25];
	public:
	      void setDetails(char studentName[],int m)		
		{
			strcpy(name,studentName);
			marks=m;
			
		}
		void display()
		{
			cout<<"Name="<<name<<endl;
			cout<<"marks="<<marks<<endl;
		}
};
int main()
{
	student s;
	s.setDetails("Aanya(MITHHI)",85);
	s.display();
	return 0;
}