#include<iostream>
using namespace std;

class datastructure
{
	private:
		   int arr[100],n;
		   
		   public:
		   	      void input()
		   	      {
		   	        cout<<"enter size:";
					cin>>n;
					
					cout<<"enter elements:";
					for(int i=0;i<n;i++)
					{
						cin>>arr[i];
					}   	
				  }
				  void display()
				  {
				  	cout<<"array:";
				  	for(int i=0;i<n;i++)
				  	{
				  		cout<<arr[i]<<"";
					}
					cout<<endl;
				  }
				  void insert(int pos,int value)
				  {
				  	for(int i=n;i>pos;i--)
				  	{
				  		arr[i]=arr[i-1];
					}
					
					arr[pos]=value;
					n++;
				  }
				  
				  void deletion(int pos)
				  {
				  	for(int i=pos;i<n-1;i++)
				  	{
				  		arr[i]=arr[i+1];
					}
					n--;
				  }
				  
				  void search(int value)
				  {
				  	for(int i=0;i<n;i++)
				  	{
				  		if(arr[i]==value)
				  		{
				  		  cout<<"element found at position"<<i<<endl;
						  return;	
						}
					}
					cout<<"element not found"<<endl;
				  }
 };

				  int main()
				  {
				  	datastructure d;
				  	
				  	d.input();
				  	d.display();
				  	
				  	d.insert(2,50);
				  	d.display();
				  	
				  	d.deletion(1);
				  	d.display();
				  	
				  	d.search(50);
				  	
				  	return 0;
				  	
				  }
			
				  
