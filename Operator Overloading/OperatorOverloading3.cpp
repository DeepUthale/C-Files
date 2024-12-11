#include <iostream>

// Binary Operator Overloading

using namespace std;

class Arrayop
{
	private:
		int a1[10];
		int al;
	
	public:
		Arrayop()
		{
			
		}
		
		Arrayop(int a[],int l1)
		{
			for(int i=0;i<l1;i++)
			{
				a1[i]=a[i];
			}
			al=l1;
		}
		
		Arrayop operator+(Arrayop aobj);
		
		void display(Arrayop aobj)
		{
			cout<<"\nDisplay Sum Array : ";	
			for(int i=0;i<aobj.al;i++)
			{
				cout<<"\n"<<aobj.a1[i];	
			}	
		}	
};

Arrayop Arrayop::operator +(Arrayop aobj)
{
	Arrayop op;
	for(int i=0;i<aobj.al;i++)
	{
		op.a1[i]=a1[i]+aobj.a1[i];
	}
	op.al=aobj.al;
	return op;
}

int main()
{
	int a1[3]={10,20,30};
	int a2[3]={10,20,30};
	
	Arrayop ca1(a1,3);
	Arrayop ca2(a2,3);
	
	Arrayop obj1=ca1+ca2;
	
	obj1.display(obj1);
	return 0;
}

