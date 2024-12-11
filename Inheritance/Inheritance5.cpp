#include <iostream>

// Multi-level Inheritance

using namespace std;

int x=10; // Global Variable

// Scope Resolution (::)
// Access Methods of the Class Outside The Class

// Resolve the Ambiguity between local Variable and Global Variable
// ::x - Global Variable    x - means class variable

// Call same name method from base class in child class
// if base class and child class has same method


class GrandFather
{
	private:
		int g_age; // 80
		int x; // Local or Class Variable
		
	public:
		GrandFather(int g_age)
		{
			x=100;
			this->g_age = g_age;
		}
		
		void showAge();
};

void GrandFather :: showAge()
{
	cout<<"\nGrandFather Age Is : "<<g_age; // 80
	cout<<"\n"<<x/* local */<<"\n"<<::x /* Global */;
	// cout<<"\n"<<GrandFather::x/* local */<<"\n"<<::x /* Global */;
}

class Father:public GrandFather
{
	private:
		int f_age; // 50
	
	public:
		Father(int f_age):GrandFather(f_age+30)
		{
			this->f_age = f_age;
		}
		
		void showAge()
		{
			GrandFather::showAge();
			cout<<"\nFather Age Is : "<<f_age; //50
		}
		
};

class Son:public Father
{
	private:
		int s_age; // 20
	
	public:
		Son(int s_age):Father(s_age+30)
		{
			this->s_age = s_age;
		}
		
		void showAge()
		{
			Father::showAge();
			cout<<"\nSon Age Is : "<<s_age; //20
		}
};

int main(int argc, char** argv) 
{
	Son s1(20);
	s1.showAge();
	return 0;
}
