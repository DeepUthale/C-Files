#include <iostream>

using namespace std;

void display(int n1, int n2)
{
	float ans;
	
	try
	{
		if(n2==0)
		{
			throw 0;
		}
		ans=n1/n2;
		cout<<"\nAnswer is : "<<ans;
	}
	
	catch(int n)
	{
		cout<<"\nCannot Divide by 0 Exception";
		cout<<"\n";
		throw n; // rethrow
	}
}

int main()
{
	cout<<"\n----Hello----";
	try
	{
		display(10,0);
		cout<<"\n----Program Completed----";
	}
	catch(...)
	{
		cout<<"\nSome Exception in display";
	}
	
	cout<<"\n----Thank You!----";
	return 0;
}
