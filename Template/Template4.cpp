#include <iostream>

using namespace std;

template<class T>

void display(T a[],int length)
{
	cout<<"\nHello";
	for(int i=0;i<length;i++)
	{
		cout<<a[i];
	}
}

int main()
{
	int arr[5]={10,20,30,40,50};
	float arr2[3]={1.1,2.2,3.3};
	
	cout<<"\nInt Type...";
	display(arr,5);
	cout<<"\nFloat Type...";
	display(arr2,3);
	
	return 0;
}
