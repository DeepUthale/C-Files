#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
	ofstream outobj("E:\\File1.txt");
	outobj<<"Hello World!\n";
	outobj<<1<<" To "<<100;
	cout<<"\nData Saved In File...";
	return 0;
}
