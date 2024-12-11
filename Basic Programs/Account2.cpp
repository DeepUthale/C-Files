#include <iostream> 

using namespace std;

class Account
{
	//By default private
	int accno;
	char name[10];
	int accbal;
	
	public:
	void accept();
	void display();
	int getBal();
	int getAccno();   // This Method Will Return Value of a Private Variable to Outside Class therefore We Need a Return Type
	void setBal(int); // This Method is Use to Update balance for the Private Variable of a Class
					  // Therefore We Need Argument
	
};

void Account :: accept() // :: --> Scope Reservation Operator
{
	cout<<"Enter Account Number : ";
	cin>>accno;
	cout<<"Enter Customer Name : ";
	cin>>name;
	cout<<"Enter Account Balance : ";
	cin>>accbal;	
}
		
void Account :: display()
{
	cout<<"\n\nAccount Number : "<<accno;
	cout<<"\nCustomer Name : "<<name;
	cout<<"\nAccount Balance : "<<accbal;
}

int Account :: getBal()
{
	return accbal;
}

int Account :: getAccno()
{
	return accno;	
}		

void Account :: setBal(int new_bal) // 1500
{
	accbal = new_bal; // New Balance is 1500
}



int main(int argc, char** argv) 
{	
	int n;
	
	Account temp; // temp object
	
	cout<<"\nHow Many Accounts Do You Want? : ";
	cin>>n;
	Account arr[n];
	
	for(int i=0;i<n;i++)
	{
		arr[i].accept();
		cout<<"\n";
	}
	
	// Sorting...
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i].getBal() > arr[j].getBal())
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{	
		//if (arr[i].getBal() > 2000)
		//{
			cout<<"\n------------ Account "<<(i+1)<<" Details ------------";
			arr[i].display();
			cout<<"\n";
		//}
	}
	
	// Searching...
	
	int ch,amt;
	int ano;
	bool b = false;
	int index = -1; // Location
	int bal,new_bal; // temp variable
	
	cout<<"\nEnter Account Number for Transaction : ";
	cin>>ano;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i].getAccno() == ano)
		{
			index = i;
			b = true;
			break;
		}
	}
	
	if(b == true)
	{
		cout<<"\n1 - Deposit\n2 - Withdraw";
		cout<<"\nEnter Your Choice : ";
		cin>>ch;
		if(ch == 1)
		{
			cout<<"Enter Amount to Deposit : ";
			cin>>amt;
			
			
			// Here getbal Method will return bal Value which is integer type
			// Therefore we are Taking that value in Balance Variable 
			// Which is also Integer Type
			bal = arr[index].getBal(); // img 1000 // Array of Index
			new_bal = bal + amt; // 1000 + 500 = 1500
			
			arr[index].setBal(new_bal);
			
			cout<<"\nRecord Updated...";
			arr[index].display();
			
		}
		
		if(ch == 2)
		{
			cout<<"Enter Amount to Withdraw : ";
			cin>>amt;
			
			
			// Here getbal Method will return bal Value which is integer type
			// Therefore we are Taking that value in Balance Variable 
			// Which is also Integer Type
			bal = arr[index].getBal(); // img 1000 // Array of Index
			new_bal = bal - amt; // 1000 + 500 = 1500
			
			arr[index].setBal(new_bal);
			
			if (new_bal < 0)
			{
				cout<<"\nInsufficient Account Balance";
			}
			else
			{
				cout<<"\nRecord Updated...";
				arr[index].display();
			}
			
		}
	}
	else
	{
		cout<<"\nAccount Does Not Exist";
	}
	
	return 0;
}
