#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	int n1 = 10;
	int &n2 = n1;
	
	cout<<"\nValue of n1 is "<<n1; // 10
	cout<<"\nValue of n2 is "<<n2; // 20
	
	cout<<"\n------------!------------";
	
	n2 = 100;
	
	cout<<"\nValue of n1 is "<<n1; // 100
	cout<<"\nValue of n2 is "<<n2; // 100
	
	cout<<"\n\nAddress "<<&n1;
	cout<<"\nAddress "<<&n2;
	return 0;
}
