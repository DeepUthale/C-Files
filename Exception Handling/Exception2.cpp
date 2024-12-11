#include <iostream>

using namespace std;

void calculate()
{
	int n1,ans,i;
	int arr[5]={0,1,2,3,4};
	
	cout<<"\nEnter Number : "; // This Error is Compile Time Error
	cin>>n1;
	cout<<"\nEnter Index Number for Array To Divide your Number : ";
	cin>>i;
	
	try
	{
		cout<<"\n----Hello----"; // Run Time Error
		
		if(i>=5) // Check Index Here
		{
			throw 'A';
		}
		
		if(arr[i]==0)
		{
			throw 0;
		}
		
		if(arr[i]>n1)
		{
			throw 1.1;
		}
		ans = n1/arr[i];
		cout<<"\nAnswer : "<<ans;
	}
	
	catch(char ch)
	{
		cout<<"\nInvalid Index Exception";
	}
	
	catch(int n)
	{
		cout<<"\nCannot Divide by Zero Exception";
	}
	
	catch(...)
	{
		cout<<"\nSome Other Exception";
	}
	
}

int main(int argc, char** argv) 
{
	cout<<"\n----Welcome----";
	calculate();
	cout<<"\n----Thank You----";
	return 0;
}
