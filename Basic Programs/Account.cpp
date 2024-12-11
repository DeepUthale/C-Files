#include <iostream> 

using namespace std; 

// Class is User Defined Datatype
// Class is Just a Template

class Account //Class is Collection of Attributes, Variables, Collections, Functions and Behaviors
{
	private: // Cannot Access outsite the Class
		//Attributes or Variables
		int acc_no;
		char acc_name[10];
		int acc_bal;
		float tax, annual_bal;
	
	public:
		//Functions
		void accept()
		{
			cout<<"Enter Account Number : ";
			cin>>acc_no;
			cout<<"Enter Account Name : ";
			cin>>acc_name;
			cout<<"Enter Account Balance : ";
			cin>>acc_bal;
		}
		
		void calculate()
		{
			if (acc_bal <= 10000)
			{
				tax = 0.05 * acc_bal;
			}
			else if (acc_bal > 10000 and annual_bal <= 20000)
			{
				tax = 0.07 * acc_bal;
			}
			else
			{
				tax = 0.09 * acc_bal;
			}
			
			annual_bal = acc_bal - tax;
		}
		
		void display()
		{
			cout<<"\nAccount Number : "<<acc_no;
			cout<<"\nAccount Name : "<<acc_name;
			cout<<"\nAccount Balance : "<<acc_bal;
			cout<<"\nTax : "<<tax;
			cout<<"\nAnnual Balance : "	<<annual_bal;
		}
		
		int getAccBal() // Method Use to return the Value of
		{				// Private Variable acc_bal to Outside Class
			return acc_bal;
		}	
		
}; //Private Variables We Can Use Only Inside The Class


int main(int argc, char** argv) 
{
	int n;
	cout<<"How Many Objects Do You Want? : ";
	cin>>n;
	
	//Array Of Objects
	Account arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i].accept();
		arr[i].calculate();
		cout<<"\n";
	}
	cout<<"\n------------!------------";
	for(int i=0;i<n;i++)
	{
		if(arr[i].getAccBal() > 1000)
		{
			arr[i].display();
		}
		cout<<"\n";
	}
	
	
/*	int n1;        // Allocate memory for int(pre-defined datatype) variable
	Account a1, a2;    // Allocate memory for Accounts(user-defined datatype)  // Refrence Varibles
	
	a1.accept();
	a1.calculate();
	a1.display();
	
	cout<<"\n------------!------------\n";
	
	a2.accept();
	a2.calculate();
	a2.display();
*/	
	return 0;
}
