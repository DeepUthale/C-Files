#include <iostream> 

using namespace std; 

// Class is User Defined Datatype
// Class is Just a Template

class Employee //Class is Collection of Attributes, Variables, Collections, Functions and Behaviors
{
	private: // Cannot Access outsite the Class
		//Attributes or Variables
		int empid;
		char name[10];
		int esal;
		float pf, hra, ta, gs;
	
	public:
		//Functions
		void accept()
		{
			cout<<"Enter Employee ID : ";
			cin>>empid;
			cout<<"Enter Employee Name : ";
			cin>>name;
			cout<<"Enter Employee Salary : ";
			cin>>esal;
		}
		
		void calculate()
		{
			pf = esal * 0.03;
			hra = esal * 0.05;
			ta = esal * 0.1;
			gs = esal - pf - hra + ta;
		}
		
		void display()
		{
			cout<<"\nEmployee ID : "<<empid;
			cout<<"\nName : "<<name;
			cout<<"\nEmployee Salary : "<<esal;
			cout<<"\nPF : "<<pf;
			cout<<"\nHRA : "<<hra;
			cout<<"\nTA : "<<ta;
			cout<<"\nGross Salary : "<<gs;	
		}	
}; //Private Variables We Can Use Only Inside The Class


int main(int argc, char** argv) 
{
	
	int n1;        // Allocate memory for int(pre-defined datatype) variable
	Employee e1;    // Allocate memory for one Employee(user-defined datatype)  // Refrence Varibles
	
	e1.accept();
	e1.calculate();
	e1.display();
	
	return 0;
}
