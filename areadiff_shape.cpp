#include<iostream>
using namespace std;
class shape
{
	protected:
		      float length,breath,radius;
    public:
    	void reactangle()
    	{
    		cout<<"enter the length:";
    		cin>>length;
    		cout<<"enter the breath:";
    		cin>>breath;
    		cout<<"area of reactangle:"<<length*breath<<endl;
		}
void circle()
 {
	cout<<"enter the radius:";
	cin>>radius;
	cout<<"area of cicle:"<<3.14*radius*radius<<endl;
 }
void triangle()
 {
	cout<<"entre the length:";
	cin>>length;
	cout<<"entre the breath:";
	cin>>breath;
	cout<<"area of triangle:"<<0.5*length*breath<<endl;
 }
};
int main()
{
	
	shape s;
	s.reactangle();
	s.circle();
	s.triangle();
	return 0;
	
}