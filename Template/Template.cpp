#include <iostream>

using namespace std;

template<class T>

// Template Function

T greater1(T n1, T n2) // We can use this function for
					  // for int, for float and, for char
{
	if(n1>n2)
	{
		return n1;
	}
	else
	{
		return n2;
	}
}

int main(int argc, char** argv) 
{	
	cout<<"\nGreater Between Two int is : "<<greater1(10,20);
	cout<<"\nGreater Between Two char is : "<<greater1('A','C');
	return 0;
}
