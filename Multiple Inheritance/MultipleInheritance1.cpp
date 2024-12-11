#include <iostream>

using namespace std;

class Base1
{
	public:
		Base1()
		{
			cout<<"\nBase 1 Constructor...";
		}
		
		void show1()
		{
			cout<<"\nShow Method from Base 1...";
		}		
};

class Base2
{
	public:
		Base2()
		{
			cout<<"\nBase 2 Constructor...";
		}
		
		void show2()
		{
			cout<<"\nShow Method from Base 2...";
		}
};

class Derived1:public Base1,public Base2
{
	public:
		Derived1()
		{
			cout<<"\nDerived 1 Constructor...";
		}
		
		void show3()
		{
			show1();
			show2();
			cout<<"\nShow 3 from Derived...";
		}
};


int main(int argc, char** argv)
{
	cout<<"\nHello Main!";
	Derived1 d1;
	d1.show3();
	cout<<"\nThank You!";
	return 0;
}
