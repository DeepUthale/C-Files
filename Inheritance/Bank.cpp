#include <iostream>
#include <string.h>
using namespace std;

class Account
{
	protected:
		int acc_no;
		char cust_name[10];
		int acc_bal;
	
	public:
		virtual void withdraw(float) = 0;
		virtual void deposit(float) = 0;
		virtual void display()=0;
	
};

class Current:public Account
{
	char company_name[10];
	
	public:
		Current(int acc_no, char cust_name[], float acc_bal, char company_name[])
		{
			this->acc_bal=acc_bal;
			strcpy(this->cust_name,cust_name);
			this->acc_bal=acc_bal;
			strcpy(this->company_name,company_name);
		}
		
		void withdraw(float amt)
		{
			cout<<"\nWithdraw Amount Current Account : ";		
		}
		
		void deposit(float amt)
		{
			cout<<"\nDeposit Amount Current Account : ";
		}
		
		void display()
		{
			cout<<"\nAccount Number : "<<acc_no;
			cout<<"\nAccount Name : "<<cust_name;
			cout<<"\nAccount Balance : "<<acc_bal;
			cout<<"\nCompany Name : "<<company_name;
		}
};

class Saving:public Account
{
	float interest;
	
	public:
		Saving(int acc_no, char cust_name[], int acc_bal, float interest)
		{
			this->acc_no=acc_no;
			strcpy(this->cust_name,cust_name);
			this->acc_bal=acc_bal;
			this->interest=interest;
		}
		
		void withdraw(float amt)
		{
			cout<<"\nWithdraw Amount Saving Account : ";		
		}
		
		void deposit(float amt)
		{
			cout<<"\nDeposit Amount Saving Account : ";
		}
		
		void display()
		{
			cout<<"\nAccount Number : "<<acc_no;
			cout<<"\nAccount Name : "<<cust_name;
			cout<<"\nAccount Balance : "<<acc_bal;
			cout<<"\nInterest Rate : "<<interest;
		}
};

int main(int argc, char** argv) 
{
	Account *a;
	
	a=new Saving(101,"Ramesh",2000,6);
	a->deposit(1000);
	a->withdraw(1000);
	a->display();
	
	a=new Current(201,"Suresh",5000,"abcd");
	a->deposit(1000);
	a->withdraw(1000);
	a->display();
	return 0;
}
