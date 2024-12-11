#include <iostream>

using namespace std;

void display()
{
	int n1;
	int n2;
	cout<<"\nEnter Any Two Numbers : ";
	cin>>n1>>n2;
	int ans;
	
	try
	{
		try
		{
			if(n2==0)
			{
				throw 0;
			}
		}
		catch(int n)
		{
			cout<<"\nException : Cannot Divide by 0";
			throw n;
		}
		ans=n1/n2;
		cout<<"\nAnswer Is : "<<ans;
	}
	catch(...)
	{
		cout<<"\nTry With Different Numbers...";
	}
}

int main()
{
	cout<<"\n----Hello----";
	
	try
	{
		display();
		cout<<"\nProgram Completed...";
	}
	catch(...)
	{
		cout<<"\nSome Exception in Program Execution...";
	}
	
	cout<<"\n----Thank You----";
	return 0;
}
