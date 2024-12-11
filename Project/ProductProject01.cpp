#include <iostream>
#include <string.h>

using namespace std;

class Product
{
	friend void calculate(Product[], int);
	
	private:
		int pro_id;
		char pro_name[10];
		int pro_price;
		int pro_qty;
		float gst, total, final_total;
	
	public:
		
		Product()
		{
			
		}
		
		// This is Parametric Constructor
		Product(int pro_id, char pro_name[10], int pro_price, int pro_qty)
		{
			this->pro_id = pro_id;
			strcpy(this->pro_name, pro_name);
			this->pro_price = pro_price;
			this->pro_qty = pro_qty;
		}
		
		void display();
};		

void calculate(Product arr[],int n)
{
	int total = 0;
	float gst, final_total;
	
	for(int i=0;i<n;i++)
	{
		total = total + arr[i].pro_price * arr[i].pro_qty;
	}
	gst = total*0.06;
	final_total = total + gst;
	
	cout<<"\n\n----------------!----------------";
	cout<<"\nTotal Bill : "<<total;
	cout<<"\nGST : "<<gst;
	cout<<"\nFinal Total : "<<final_total;
}

void Product :: display()
{
	cout<<"\nProduct ID : "<<pro_id;
	cout<<"\nProduct Name : "<<pro_name;
	cout<<"\nProduct Price : "<<pro_price;
	cout<<"\nProduct Quantity : "<<pro_qty;
	cout<<"\nProduct Total : "<<pro_price * pro_qty;
}


int main(int argc, char** argv) 
{
	int n;
	int pro_id;
	char pro_name[10];
	float pro_price;
	int pro_qty;
	
	cout<<"\nHow Many Products Do You Want? : ";
	cin>>n;
	
	Product arr[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter Product ID : ";
		cin>>pro_id;
		cout<<"\nEnter Product Name : ";
		cin>>pro_name;
		cout<<"\nEnter Product Price : ";
		cin>>pro_price;
		cout<<"\nEnter Product Quantity : ";
		cin>>pro_qty;
		
		Product p(pro_id, pro_name, pro_price, pro_qty);
		arr[i] = p;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		arr[i].display();
	}
	
	calculate(arr, n);
	
	return 0;
}
