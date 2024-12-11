#include <iostream>
// Dynamic Polymorphism / Runtime Ploymorphism
// Overriding

using namespace std;

class Shape // Abstract class, we cant create Object of Abstract Class
{
	public:
		// pure virtual function, Abstract function
		virtual void CalculateArea() = 0; 
		// virtual function is use for overriding
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
/*  Circle c(5);
	c.CalculateArea();
	
	Triangle t(3,4);
	t.CalculateArea(); */
	
	Shape *s;
	
	s=new Circle(3);
	s->CalculateArea();
	
	s=new Triangle(2,3);
	s->CalculateArea();

	return 0;
}
