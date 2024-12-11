#include <iostream>
#include <string.h>
/* Constructor... */

using namespace std;

class Employee // Constructor Name and Class Name is Same 
{
	private:
		int empid;
		char empname[10];
		float esal;
	
	public:	// CPP will Provide a Default Constructor
	// Employee() Constructor With No Argument Is Called Default Constructor
	
		Employee() // Constructor Does Not Have a Return Type
		{
			cout<<"\nCall Default Constructor...";
			empid = 1;
			strcpy(empname, "abc");
			esal = 10000;
		}
		
		// Parametric Constructor
		Employee(int eid, char enm[10], float es)
		{
			empid = eid;
			strcpy(empname, enm);
			esal = es;
		}
		
		// Copy Constructor
		Employee(Employee * emptemp)  // Here emptemp Will Point To e3 Object
		{
			// Here 'this' means e4 And emptemp means e3
			this->empid = emptemp->empid;
			strcpy(this->empname,emptemp->empname);
			this->esal = emptemp->esal;
		}
		
		// Destructor
		~Employee() // tilde (~)
		{
			cout<<"\nCall Destructor..."; // Is use to Remove Memory Which is Not in Use : Close Files, Runs at End
		}
		
		void accept()
		{
			
		}
		
		void calculate()
		{
			
		}
		
		void display()
		{
			cout<<"\n\nEmployee ID : "<<empid;
			cout<<"\nEployee Name : "<<empname;
			cout<<"\nEmployee Salary : "<<esal;	
		}	
		
};

int main() 
{
	// When we Create Object then Constructor will be Invoked
	Employee e1, e2;  // If You Have a Parametric Constructor, then CPP Will Not Provide a Default Constructor
	
	Employee e3(123, "def", 15000); // Call Parametric Constructor
	Employee e4(&e3); // Call Copy Constructor
	
	e1.display();
	e2.display();
	e3.display();
	
	e4.display();
	cout<<"\n";
	return 0;
}
