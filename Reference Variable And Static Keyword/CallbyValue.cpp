#include <iostream>

using namespace std;
// Call by Value

void swap1(int, int);

int main(int argc, char** argv) 
{
	int n1 = 10, n2 = 20;
	cout<<"\nIn main function before swap function : ";
	cout<<"\nValue of n1 is : "<<n1; // 10
	cout<<"\nValue of n2 is : "<<n2; // 20
	
	swap1(n1, n2);
	
	cout<<"\n\nIn main function after swap function : ";
	cout<<"\nValue of n1 is : "<<n1; // 10
	cout<<"\nValue of n2 is : "<<n2; // 20
	return 0;
}

void swap1(int a, int b)
{
	int temp;
	
	temp = a;
	a = b;
	b = temp;
	
	cout<<"\n\nIn Swap function...";
	cout<<"\nValue of a is : "<<a;
	cout<<"\nValue of b is : "<<b;
}

// If we change value in formal parameter (a and b)
// It does not affect the values of the actual parameters
// Because 'a and b' has different memory address
