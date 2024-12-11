#include <iostream>
// Dynamic Polymorphism / Runtime Ploymorphism
// Overriding

using namespace std;

class Shape
{
	public:
		virtual void CalculateArea() // virtual function is use for overriding
		{
			cout<<"Base Class";
		}	
};

class Circle:public Shape
{
	private:
		float r,g,ca;
	
	public:
		Circle(float r)
		{
			this->r=r;	
		}	
		
		void CalculateArea()
		{
			ca = 3.14*r*r;
			cout<<"\nArea of Circle : "<<ca;
		}
};

class Triangle:public Shape
{
	private:
		float b,h,ta;
	
	public:
		Triangle(float b,float h)
		{
			this->b=b;
			this->h=h;	
		}	
		
		void CalculateArea()
		{
			ta=0.5*b*h;
			cout<<"\nArea of Triangle : "<<ta;
		}
};

int main(int argc, char** argv) 
{
	Shape *s;
	
	Circle c(5);
	s=&c;
	s->CalculateArea();
	
	Triangle t(3,4);
	s=&t;
	s->CalculateArea();

	return 0;
}
