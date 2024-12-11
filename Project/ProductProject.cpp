#include <iostream>
#include <string.h>
using namespace std;

class Product
{
	private:
		int p_id, p_qty;
		char p_name[10];
		float p_price, total;
		
	public:
		
		Product()
		{
			cout<<"\nCall Default Constructor";
		}
		
		Product(int pro_id, char pro_name[10], int pro_qty, float pro_price)
		{
			p_id = pro_id;
			p_qty = pro_qty;
			strcpy(p_name,pro_name);
			p_price = pro_price;
		}
		
		void accept();
		void calculate();
		void display();
		float getPrice();
		
		~Product()
		{
			cout<<"\nCall Destructor...";
		}
};		
		

void Product :: accept()
{
	cout<<"\nEnter Product ID : ";
	cin>>p_id;
	cout<<"\nEnter Product Name : ";
	cin>>p_name;
	cout<<"\nEnter Product Quantity : ";
	cin>>p_qty;
	cout<<"\nEnter Product Price : ";
	cin>>p_price;
			
}
		
void Product :: calculate()
{
	float gst;
	gst = 0.08 * p_price;
	total = p_qty * p_price + gst;
}

float Product :: getPrice()
{
	return p_price;
}	
	
void Product :: display()
{
	cout<<"\n| Product_ID   | Product_Name  |Product_Quantity| Product_Price | Total |";
	cout<<"\n|\t"<<p_id<<"\t|"<<"\t"<<p_name<<"\t|"<<"\t"<<p_qty<<"\t|"<<"\t"<<p_price<<"\t| "<<total<<"\t|";
}

int main(int argc, char** argv) 
{
	int n;
	
	Product p1(12345, "Sub", 1, 50);
	
	cout<<"\nHow many Products Do you Want ? : ";
	cin>>n;
	Product arr[n];
	
	cout<<"\n\nFor Temp :";
	Product temp;
		
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		arr[i].accept();
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i].getPrice() > arr[j].getPrice())
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;	
			}	
		}
	}
	
	for(int i=0;i<n;i++)
	{
		if(arr[i].getPrice() > p1.getPrice())
		{
			temp = arr[i];
			arr[i] = p1;
			p1 = temp;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		arr[i].calculate();
		arr[i].display();
		cout<<"\n\n";
	}
	
	p1.calculate();
	p1.display();
	cout<<"\n";
	return 0;
}
