#include <iostream>

using namespace std;

// Class Template

template<class T>

class mypair
{
	T a,b;
	
	public:
		mypair(T first, T second)
		{
			a=first;
			b=second;
		}
	T getmax ();
};

template <class T>
T mypair<T>::getmax ()
{
	T val;
	val = a>b ? a:b;
	return val;
}

int main()
{
	
	mypair<int> myobject(100,75);
	cout<<"\nGreater between two int is : "<<myobject.getmax();
	mypair<float> myobject2(1.1,2.2);
	cout<<"\nGreater between two floats is : "<<myobject2.getmax();
	mypair<char> myobject3('A','Z');
	cout<<"\nGreater between two char is : "<<myobject3.getmax();
}
