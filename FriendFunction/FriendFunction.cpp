#include <iostream>

using namespace std;

class Demo
{
	friend void display(Demo);
	
	private:
		int n1; // Private Variable Can be Accessed by Same Class Member Functions
				// Outside the Class
	
	public:
		void show();
};

void Demo :: show() // Here show is Member of Class Demo, So show can Access private Variable
					// Outside the Class
{
	cout<<"\nValue of n1 is : "<<n1;
}

void display(Demo d1)
{
	cout<<"\nValue of n1 is : "<<d1.n1;
}

int main(int argc, char** argv) 
{
	
	Demo d1;
	d1.show();
	display(d1);
	
	return 0;
}
