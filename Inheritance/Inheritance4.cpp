#include <iostream>

using namespace std;

class A
{
	public:
	A()
	{
		cout<<"\nDefault A Class...";	
	}	
};

class B: public A
{
	public:
	B()
	{
		cout<<"\nDefault B Class...";	
	}	
};

class C: public B
{
	public:
	C()
	{
		cout<<"\nDefault C Class...";	
	}	
};

int main(int argc, char** argv) 
{
	C c1;
	return 0;
}
