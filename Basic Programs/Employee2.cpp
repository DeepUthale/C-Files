#include <iostream> 

using namespace std;

class Employee
{
	private:
		
		int eid,age;
		char name[10];
		float salary;
	
	public:
		
		void accept()
		{
			cout<<"\nEnter Employee ID : ";
			cin>>eid;
			cout<<"Enter Employee Name : ";
			cin>>name;
			cout<<"Enter Employee Age : ";
			cin>>age;
			cout<<"Enter Employee Salary : ";
			cin>>salary;
		}
		void display()
		{
			cout<<"\nEmployee ID : "<<eid;
			cout<<"\nEmployee Name : "<<name;
			cout<<"\nEmployee Age : "<<age;
			cout<<"\nEmployee Salary : "<<salary;
		}
		
		int getSalary()
		{
			return salary;
		}
		int getAge()
		{
			return age;
		}
	
};


int main(int argc, char** argv) 
{
	int n;
	cout<<"How Many Objects Do You Want? : ";
	cin>>n;
	
	Employee arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i].accept();
		cout<<"\n";
	}
	cout<<"------------!------------";
	for(int i=0;i<n;i++)
	{
		if (arr[i].getSalary() > 40000 and arr[i].getAge() < 40)
		{
			arr[i].display();
			cout<<"\n";
		}
	}
	
	return 0;
}
