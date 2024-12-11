#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
	char nm[10];
	ofstream myfile("E:\\File2.txt");
	cout<<"\nEnter Any Five Names : ";
	
	for(int i=1;i<=5;i++)
	{
		cin>>nm;
		myfile<<nm<<"\n";
	}
	myfile.close();
	return 0;
}
