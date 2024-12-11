#include <iostream>

using namespace std;

class Global
{
	public:
	Global()
	{
		cout<<"\nHello Global...";
	}
	
	void globalFunction()
	{
		cout<<"\nGlobal Function..";
	}
	
};

class Base1:virtual public Global // Here only one object of base Class wii be created  
{
	public:
		Base1()
		{
			cout<<"\nBase Class 1 Constructor...";
		}
		
		void show1()
		{
			cout<<"\nShow Function from Base 1..";
		}
		
		void test()
		{
			cout<<"\nTest from base 1";
		}
};

class Base2:virtual public Global
{
	public:
		Base2()
		{
			cout<<"\nBase Class 2 Constructor...";
		}
		
		void show2()
		{
			cout<<"\nShow Function from Base 2..";
		}
		
		void test()
		{
			cout<<"\nTest from base 2";
		}
};

class Derived:public Base1,public Base2
{
	public:
		Derived()
		{
			cout<<"\nDerived Class Constructor...";
		}
		
		void display()
		{
			// ambiguity... because two classes are inheriting one class
			globalFunction();
			// ambiguity... because same function is present in both parent Class
			Base1::test();
			Base2::test();
			show1();
			show2();
			cout<<"\nDisplay from Derived..";
		}
};

int main(int argc, char** argv)
{
	Derived d1;
	d1.display();
	
	return 0;
}
