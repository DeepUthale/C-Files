#include <iostream>

// Function Overloading

using namespace std;

class Area
{
	public:
		float area(float r)
		{
			return 3.14*r*r;
		}
		
		float area(float b, float h)
		{
			return 0.5*b*h;
		}
		
		float rect_area(float l, float b)
		{
			return l*b;
		}
};

int main(int argc, char** argv) 
{
	Area a;
	int ch;
	float r,b,h,l,br;
	
	do
	{
		cout<<"\n1- Area of Circle\n2- Area of Triangle\n3- Area of Rectangle";
		cout<<"\nEnter Your Choice : ";
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				cout<<"\nEnter Radius for Circle : ";
				cin>>r;
				cout<<"\nArea of Circle is : "<<a.area(r);
			break;	
			case 2:
				cout<<"\nEnter Base and Height for Triangle : ";
				cin>>b>>h;
				cout<<"\nArea of Triangle is : "<<a.area(b, h);
			break;	
			case 3:
				cout<<"\nEnter Length and Breadth for Rectangle : ";
				cin>>l>>br;
				cout<<"\nArea of Rectangle is : "<<a.rect_area(l, br);
			break;	
			default:
				cout<<"\nInvalid Choice.";
		}
		cout<<"\nDo you Want to Continue Press 1 : ";
		cin>>ch;
	}while(ch==1);

	return 0;
}
