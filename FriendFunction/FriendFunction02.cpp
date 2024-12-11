#include <iostream>

using namespace std;
class Demo2;
class Demo1
{
	friend void display(Demo1,Demo2);
	
	private:
		int n1; // Private Variable Can be Accessed by Same Class Member Functions
				// Outside the Class
	
	public:
		Demo1()
		{
			n1=10;
		}
		void show();
};

class Demo2
{
	friend void display(Demo1,Demo2);
	
	private:
		int n2;
	
	public:
		Demo2()
		{
			n2=20;
		}
		void show();
};

void Demo1 :: show() // Here show is Member of Class Demo, So show can Access private Variable
					// Outside the Class
{
	cout<<"\nValue of n1 is : "<<n1;
}

void Demo2 :: show()
{
	cout<<"\nValue of n2 is : "<<n2;
}

void display(Demo1 d1, Demo2 d2) // Display function can Access Private
								 // Members of
								 // Class Demo1 and Demo2 Outside Class
{
	cout<<"\nValue of n1 from Demo1 is : "<<d1.n1;
	cout<<"\nValue of n2 from Demo2 is : "<<d2.n2;
	
	cout<<"\nAddition of n1 and n2 is : "<<d1.n1 + d2.n2;
}

int main(int argc, char** argv) 
{
	
	Demo1 d1;
	Demo2 d2;
	
	d1.show();
	d2.show();
	
	display(d1,d2);
	
	return 0;
}
