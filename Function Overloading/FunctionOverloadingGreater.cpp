#include <iostream>

// Function Overloading

using namespace std;

class Greater
{
	public:
		int greater(int n1, int n2)
		{
			if(n1 > n2)
				return n1;
			else
				return n2;
		}
		
		float greater(float n1, float n2)
		{
			if(n1 > n2)
				return n1;
			else
				return n2;
		}
		
		char greater(char n1, char n2)
		{
			if(n1 > n2)
				return n1;
			else
				return n2;
		}
		
		float greater(int n1, float n2)
		{
			if(n1 > n2)
				return n1;
			else
				return n2;
		}
};


int main(int argc, char** argv) 
{
	Greater g;
	
	cout<<"Greater Between Two Numbers is : "<<g.greater(10, 20);
	cout<<"\nGreater Between Two Numbers is : "<<g.greater(1.1f, 2.2f);
	cout<<"\nGreater Between Two Character is : "<<g.greater('A', 'a');
	cout<<"\nGreater Between Two Numbers is : "<<g.greater(2, 1.1f);
	
	return 0;
}
