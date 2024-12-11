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

class B:protected A // Means Class A, protected and public variables, becomes protected in Class B 
{
	// y z valid, we can use y and z in class B also, in class C
	// y and z variables becomes protected in class B because of protected inheritance
	// means we can use Class A members in Class B or in child of Class B(C)
	
	public:
		void display()
		{
			cout<<"\nValue of y from Class A : "<<y;
			cout<<"\nValue of z from Class A : "<<z;
		}
};

class C:private B
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
	return 0;
}
