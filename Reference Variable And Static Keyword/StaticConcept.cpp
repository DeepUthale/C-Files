#include <iostream>

// Static Concept

using namespace std;

class Employee
{
	public:
		int emp_id; // Allocate Memory for Each Object
		            // For One Object One Memory
		
		static int dep_no; // Allocate Only One Memory
						   // For One Class One Memory
		
	void display()
	{
		cout<<"\nValue of Employee ID : "<<emp_id;
		cout<<"\nValue of Department Number : "<<dep_no;	
	}
	
	static void show() // In Static Method We Can Use Only Static Variables Directly
					   /* But to Use Non-Static, We Need to Create Object of That Class
					      In Static Method */
	{
		Employee temp;
		temp.emp_id = 1;
		cout<<"\nValue of Employee ID :"<<temp.emp_id;
		cout<<"\nValue of Department Number : "<<dep_no;
	}
		
};

int Employee :: dep_no; // Default Value : 0
                        // Static Variable Need To Initialize Outside The Class

int main(int argc, char** argv) 
{
	
	
	Employee :: show();
	
	Employee e1, e2;
	e1.emp_id = 101;
	e1.dep_no = 10;
	e1.display();
	
	e2.emp_id = 201;
	e2.display();
	
	return 0;
}
