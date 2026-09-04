#include<iostream>
using namespace std;
class  product
{
	private:
		 double Price;
		 
	public:
		void updatePrice(double p)
		{
			Price=p;
		}
		void displayPrice()
		{
			cout<<"product price:"<<Price<<endl;
		}
};
int main()
{
	product p;
	double newPrice;
	
	p.updatePrice(599.99);
	cout<<"old price:";
	p.displayPrice();
	cout<<"enter your  new price:";
	cin>>newPrice;
	
	p.updatePrice(newPrice);
	
	//cout<<"updated price:";
	p.displayPrice();
	return 0;
}