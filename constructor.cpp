#include<iostream>
using namespace std;
class stackADT
{
	private:
		   int arr[100];
		   int topindex;
		   
    public:
	      stackADT()
		  {
		    topindex=-1;	
		  }		   
		  void push(int value)
		  {
		  	if(topindex<99)
		  	{
		  	  arr[++ topindex]=value;
			}
		  }
		  void pop()
		  {
		  	if(topindex>=0)
		  	{
		  	topindex --;
		    }
		  }
          int peek()
		  {
		  	return (topindex>=0)?arr[topindex]:-1;
		  }	
	};
	int main()
	{
		stackADT mystack;
		
		mystack.push(10);
		mystack.push(40);
		
		cout<<"top element:"<<mystack.peek()<<endl;
		return 0;
	}
