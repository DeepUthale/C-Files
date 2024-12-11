#include <iostream>

// Private Inheritance

using namespace std;

class A
{
	private:
		int x;
	
	protected:
		int y;
		
	public:
		int z;	
};

class B:public A // Means Class A, protected variable becomes protected in child 
				 // and public variables, becomes public in Class child 
{
	// y z valid, we can use y and z in class B also, in class C,
	// means we can use Class A members in Class B or in child of Class B(C)
	// Also public members of Class A we can use in main method also
	
	public:
		void display()
		{
			cout<<"\nValue of y from Class A : "<<y;
			cout<<"\nValue of z from Class A : "<<z;
		}
};

class C:public B
{
	public:
		void display()
		{
			cout<<"\nValue of y from Class A : "<<y;
			cout<<"\nValue of z from Class A : "<<z;
		}
};

int main(int argc, char** argv) 
{	
	C c;
	c.y; // invalid, y is protected in A so, we can use in Class B and C in public inheritance
	c.z; // valid, here z is public in A , so we can use z in Class B or C or in main method also, using Object of child
	return 0;
}
