#include<iostream>
using namespace std;
class student
{
	int roll;
	
	public:
		student(int r)
		{
			roll=r;
			cout<<"Roll:"<<roll<<endl;
			
		}
};
int main()
{
	student s(101);
	return 0;
} 