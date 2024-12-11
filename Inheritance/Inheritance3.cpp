#include <iostream>

using namespace std;

class Base // or Super or Parent 
{
	private: // Only friend function can use private
		int z; // Can Use only inside same Class
	
	protected: // protected variable can be used by Child Classes
		int x;
		int p;
	
	public:
		Base()
		{
			x=10;
			p=50;
		}
		
		void display()
		{
			cout<<"\nDisplay From Base...";
		}
		
		void show()
		{
			cout<<"\nParent Class Show Method...";
		}
};

class Derived:public Base
// or Sub or Child 
{
	private:
		int x;
		int y;
		
	public:
		Derived()
		{
			x=100;
			y=20;	
		}
		
		void show()
		{
			display();
			
			Base::show();
			
			cout<<"\nValue Of Base Class Variable x Is : "<<Base::x;
			cout<<"\nValue Of Base Class Variable p Is : "<<p;
			cout<<"\nValue Of Derived Class Variable x Is : "<<x;
			cout<<"\nValue Of Base Class Variable y Is : "<<y;
		}
};

int main(int argc, char** argv) 
{
	Derived d1;
	d1.show();
	return 0;
}
