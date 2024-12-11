#include <iostream>

using namespace std;

class Base // or Super or Parent 
{
	// Allocate Memory for Base Class
	// And Maybe Child will Use these Variables
	
	public:
		Base() // Deafult Constructor
		{
			cout<<"\nBase Class-Default Constructor";
		}
		
		Base(int n)
		{
			cout<<"\nBase Class Parametric Constructor";
		}
};

class Derived:public Base
// or Sub or Child 
{
	public:
	Derived()
	{
		cout<<"\nDerived Class-Default Constructor";
	}
	
	Derived(int n):Base(n)
	{
		cout<<"\nDerived Class Parametric Constructor";
	}
};

int main(int argc, char** argv) 
{
	cout<<"\n----Hello----";
	Derived d1;
	Derived d2(10);
	cout<<"\n----Thank You!----";
	return 0;
}
