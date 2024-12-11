#include <iostream>

using namespace std;

void display(int ano, int abal, int age)
{	
	try
	{
		if(abal<1000)
		{
			throw 0;
		}
		if(age<18)
		{
			throw 'A';
		}
		cout<<"\nCongrats...Your Account is Open...";
	}
	
	catch(int n)
	{
		cout<<"\nException is : Accbal<1000";
		cout<<"\n";
		throw n; // rethrow
	}
	
	catch(char ch)
	{
		cout<<"\nException is : age<18";
		throw ch;
	}
}

int main()
{
	cout<<"\n----Welcome Bank----";
	try
	{
		display(101,1020,17);
		cout<<"\n----Program Completed----";
	}
	catch(...)
	{
		cout<<"\nSome Exception in Account Opening...";
	}
	
	cout<<"\n----Thank You!----";
	return 0;
}
