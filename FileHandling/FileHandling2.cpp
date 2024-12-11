#include <iostream>
#include <fstream>

using namespace std;

class Employee
{
	private:
		int eid;
		char ename[10];
		float esal;
	
	public:
		void accept()
		{
			cout<<"\nEnter Employee ID : ";
			cin>>eid;
			cout<<"\nEnter Employee Name : ";
			cin>>ename;
			cout<<"\nEnter Employee Salary: ";
			cin>>esal;
		}
		
		int getEmpID()
		{
			return eid;
		}
		
		char *getName()
		{
			return ename;
		}
		
		float getSalary()
		{
			return esal;
		}
};

int main() 
{
	ofstream file("E:\\File3.txt");
	char ch;
	Employee e1;
	
	e1.accept();
	
	cout<<e1.getEmpID();
	cout<<"\n";
	cout<<e1.getName();
	cout<<"\n";
	cout<<e1.getSalary();
	
	file<<e1.getEmpID()<<" "<<e1.getName()<<" "<<e1.getSalary(); // Save data in file
	file.close(); // Closes the File
	
	cout<<"\nDo You Want To View the Contents of the File Type (Y,N) : ";
	cin>>ch;
	
	if(ch=='y' or ch=='Y')
	{
		ifstream file("E:\\File3.txt");
		char e_no[10];
		char e_name[10];
		char e_sal[10];
		file>>e_no>>e_name>>e_sal; // cin>>A>>B
		cout<<"\n Employee ID Is : "<<e_no;
		cout<<"\n Employee Name Is : "<<e_name;
		cout<<"\n Employee Salary Is : "<<e_sal;
	}
	
	return 0;
}
