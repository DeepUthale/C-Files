#include <iostream>

using namespace std;

class Base
{
	public:
		Base() // Deafult Constructor
		{
			cout<<"\nBase Class-Default Constructor";
		}
};

class Derived:public Base
{
	public:
	Derived()
	{
		cout<<"\nDerived Class-Default Constructor";
	}
};

int main(int argc, char** argv) 
{
	cout<<"\n------------WELCOME------------";
	Derived d1;
	cout<<"\n------------THANK YOU------------";
	return 0;
}
