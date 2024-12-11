#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	int n1,n2,ans;
	cout<<"\n----Welcome----";
	cout<<"\nEnter Any Two Numbers : "; // This Error is Compile Time Error
	cin>>n1>>n2;
	
	try
	{
		cout<<"\n----Hello----"; // Run Time Error
		
		if(n2==0)
		{
			throw 0;
		}
		ans = n1/n2;
		cout<<"\nAnswer : "<<ans;
	}
	
	catch(int n)
	{
		cout<<"\nCannnot Divide by 0";
	}
	cout<<"\n----Thank You----";
	
	return 0;
}
