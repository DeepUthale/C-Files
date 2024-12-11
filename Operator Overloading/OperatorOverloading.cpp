#include <iostream>

// Unary Operator Overloading

using namespace std;

class Space
{
	int x,y,z;
	
	public:
		Space(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		
		void operator -()
		{
			x=-x;
			y=-y;
			z=-z;
		}
		
		void display()
		{
			cout<<"\nx = "<<x;
			cout<<"\ny = "<<y;
			cout<<"\nz = "<<z;
		}
};

int main(int argc, char** argv) 
{
	Space s(10,-20,30);
	s.display();
	cout<<"\nAfter Overloading An Minus Operator : ";
	cout<<"\n------------!------------";
	- s; // Unary Operator Overloading, - operator, and s operand
	s.display();
	
	return 0;
}
