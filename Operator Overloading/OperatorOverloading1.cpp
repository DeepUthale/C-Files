#include <iostream>

// Binary Operator Overloading

using namespace std;

class Complex
{
	private:
		int x;
		int y;
	
	public:
		Complex()
		{
			x=0;
			y=0;
		}
		
		Complex(int i,int j)
		{
			x=i;
			y=j;
		}
		
		void showxy()
		{
			cout<<"\n{0} {1}"<<"\t"<<x<<"\t"<<y;
		}
		
		Complex operator -(Complex c)
		{
			Complex temp;
			temp.x = -c.x;
			temp.y = -c.y;
			return temp;
		}
};

int main()
{
	Complex c1(10,20); 
	c1.showxy(); // displays 10 and 20
	
	Complex c2;
	c2.showxy(); // displays 0 and 0
	
	c2=c2-c1; // c2.(-c1) 0 0 -10 -20
	c2.showxy(); // displays -10 and -20
	
	return 0;
}
