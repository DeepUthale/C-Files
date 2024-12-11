#include <iostream>

// Binary Operator Overloading

using namespace std;

class Complex
{
	private:
		int r,i;
	
	public:
		Complex()
		{}
		
		Complex(int a,int b)
		{
			r=a;
			i=b;
		}
		
		Complex operator +(Complex c);
		Complex operator *(Complex c);
		
		void display()
		{
			cout<<"\nValue of r : "<<r;
			cout<<"\nValue of i : "<<i;
		}
};

Complex Complex::operator +(Complex c)
{
	Complex c1;
	c1.r=r+c.r;
	c1.i=i+c.i;
	return c1;	
} 

Complex Complex::operator *(Complex c)
{
	Complex c2;
	c2.r=r*c.r;
	c2.i=i*c.i;
	return c2;
}

int main()
{
	Complex obj1,obj2;
	Complex ca1(1,2),ca2(10,20);
	obj1=ca1+ca2;
	obj2=ca1*ca2;
	obj1.display();
	obj2.display();
	return 0;
}
