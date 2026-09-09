#include<iostream>
using namespace std;

int main()
{
	int choice;
	
	cout<<"==========MENU=========="<<endl;
	cout<<"1.Addition"<<endl;
	cout<<"2.subtraction"<<endl;
	cout<<"3.multiplication"<<endl;
	cout<<"4.Division"<<endl;
	cout<<"5.Factorial"<<endl;
	cout<<"6.Even or odd"<<endl;
	cout<<"7.Positive or Negative"<<endl;
	cout<<"8.palindrome Number"<<endl;
	cout<<"9.Reverse number"<<endl;
	cout<<"10.Prime Number"<<endl;
	cout<<"11.Armstrong number"<<endl;
	cout<<"12.sum of digits"<<endl;
	cout<<"13.count digits"<<endl;
	cout<<"14.fibonacci series"<<endl;
	cout<<"15.largest of three numbers"<<endl;
	
	cout<<"\n Enter you choice:";
	cin>>choice;
	
	switch(choice){
		
		case 1:{
			int a,b;
			cout<<"enter two number:";
			cin>>a>>b;
			
			cout<<"addition="<<a+b;
			break;
		}
		case 2:{
			int a,b;
			cout<<"enter two number:";
			cin>>a>>b;
			
			cout<<"subtraction="<<a-b;
			break;
		}
		case 3:{
			int a,b;
			cout<<"enter two number:";
			cin>>a>>b;
			
			cout<<"multiplication="<<a*b;
			break;
		}
		case 4:{
			int a,b;
			cout<<"enter two number:";
			cin>>a>>b;
			
			if(b!=0)
			 cout<<"Division"<<a/b;
			else
			 cout<<"cannot divided by zero";
			break;
		}
		case 5:{
			int n,fact=1;
			cout<<"enter the number:";
			cin>>n;
			
			for(int i=1;i<=n;i++){
			
				fact=fact*i;
			}
				cout<<"factorial="<<fact;
			
			break;
		}
		case 6:{
			int n;
			cout<<"enter the number:";
			cin>>n;
			
			if(n%2==0)
			 cout<<"Given number are even number";
			else
			 cout<<"Given number are odd number";
			 
			break;
		}
		case 7:{
			int n;
			cout<<"enter the number:";
			cin>>n;
			
			if(n>0)
			 cout<<"Given number is positive number";
			else if(n>0)
			 cout<<"Given number is negative number";
			else
			 cout<<"Given number is zero";
			 
			break;
		}
		case 8:{
			int n,original,reverse=0,digit;
			
			cout<<"enter number:";
			cin>>n;
			
			original=n;
			
			while(n!=0)
			{
				digit=n%10;
				reverse=reverse*10+digit;
				n=n/10;
			}
			
			if(original==reverse)
			 cout<<"palindrome number";
			else
			 cout<<"not palindrome number";
			break;
		}
		case 9:{
			int n,reverse=0,digit;
			
			cout<<"enter the number:";
			cin>>n;
			
			while(n!=0)
			{
				digit=n%10;
				reverse=reverse*10+digit;
				n=n/10;
			}
			cout<<"reverse="<<reverse;
			
			break;
		}
		case 10:{
			int n,count=0;
			
			cout<<"enter the number:";
			cin>>n;
			
			for(int i=1;i<=n;i++){
			  if(n%i==0)
			   count++;
            }
            if(count==2)
			 cout<<"prime Number";
			else
			 cout<<"Not prime";
			    
			break;
		}
		case 11:{
			int n,original,digit,sum=0;
			
			cout<<"enter number:";
			cin>>n;
			
			original=n;
			
			while(n!=0){
				digit=n%10;
				sum=sum+(digit*digit*digit);
				n=n/10;
			}
			if(sum==original)
			 cout<<"Armstrong number";
			else
			 cout<<"Not armstrong number";
			break;
		}
		case 12:{
			int n,digit,sum=0;
			
			cout<<"enter the number:";
			cin>>n;
			
			while(n!=0){
				digit=n%10;
				sum=sum+digit;
				n=n/10;
			}
			cout<<"sum of digit="<<sum;
			
			break;
		}
		case 13:{
			int n,count=0;
			
			cout<<"enter number:";
			cin>>n;
			
			if(n==0)
			 count=1;
			else{
				while(n!=0){
					n=n/10;
					count++;
				}
			}
			cout<<"number of digits="<<count;
			break;
		}
		case 14:{
			int n,a=0,b=1,c;
			
			cout<<"enter number of terms:";
			cin>>n;
			
			cout<<"fibnonacci series:";
			
			for(int i=1;i<=n;i++){
				cout<<a<<"";
				
				c=a+b;
				a=b;
				b=c;
			}
			break;
		}
		case 15:{
			int a,b,c;
			
			cout<<"enter three numbers:";
			cin>>a>>b>>c;
			
			if(a>=b&&a>=c)
			 cout<<"largest="<<a;
			else if(b>=a&&b>=c)
			 cout<<"largest="<<b;
			else
			 cout<<"largest="<<c;
			break;
		}
		default:
			cout<<"Invalid choice!";
	}
	return 0;
}