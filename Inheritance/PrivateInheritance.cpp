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

class B:private A // Means Class A, protected and public variables, becomes private in Class B 
{
	// y z valid, we can use y and z in class B
	// y and z variables becomes private in class B
	// means we can't use them outside class B or child of class B
	
	public:
		void display()
		{
			cout<<"\nValue of y from Class A : "<<y;
			cout<<"\nValue of z from Class A : "<<z;
		}
};

class C:private B
{
	// Here we can't access Class A data members...
};

int main(int argc, char** argv) 
{	
	return 0;
}
