#include <iostream>

using namespace std;

class Employee
{
	private:
		int emp_id;
		char emp_name[10];
		int emp_sal;
		
	protected:
		void accept()
		{
			cout<<"\nEnter Employee ID : ";
			cin>>emp_id;
			cout<<"\nEnter Employee Name : ";
			cin>>emp_name;
			cout<<"\nEnter Employee Salary : ";
			cin>>emp_sal;
		}
		
		void display()
		{
			cout<<"\nEmployee ID : "<<emp_id;
			cout<<"\nEmployee Name : "<<emp_name;
			cout<<"\nEmployee Salary : "<<emp_sal;
		}
			
};

class Manager: public Employee
{
	int bonus;
	
	public:
	void getData()
	{
		Employee::accept();
		cout<<"\nEnter Manager Bonus : ";
		cin>>bonus;
	}
	
	void showData()
	{
		Employee::display();
		cout<<"\nBonus : "<<bonus;
	}
		
};

class Developer:public Employee
{
	int hrs;
	
	public:
		void getData()
		{
			Employee::accept();
			cout<<"\nEnter Number of Hrs. : ";
			cin>>hrs;
		}
		
		void showData()
		{
			Employee::display();
			cout<<"\nNumber of Hours : "<<hrs;
		}
};

int main(int argc, char** argv) 
{
	
	Manager m;
	cout<<"\n------------Manager------------";
	m.getData();
	m.showData();
	
	Developer d;
	cout<<"\n------------Developer------------";
	d.getData();
	d.showData();
	
	return 0;
}
