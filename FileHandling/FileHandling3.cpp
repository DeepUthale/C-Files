#include <iostream>
#include <fstream>

using namespace std;

class Account
{
	private:
		int acc_no;
		char name[10];
		float acc_bal;
	
	public:
		void accept()
		{
			cout<<"\nEnter Account Number : ";
			cin>>acc_no;
			cout<<"\nEnter the Name : ";
			cin>>name;
			cout<<"\nEnter Account Balance : ";
			cin>>acc_bal;	
		}
		
		void display()
		{
			cout<<"\n----------------!----------------";
			cout<<"\nAccount Number : "<<acc_no;
			cout<<"\nName of Account holder : "<<name;
			cout<<"\nAccount Balance : "<<acc_bal;	
		}	
		
		float search()
		{
			int with,dep,ch;
			cout<<"\n----------------Account Details----------------";
			cout<<"\nAccount Number : "<<acc_no;
			cout<<"\nName of Account holder : "<<name;
			cout<<"\nAccount Balance : "<<acc_bal;
			cout<<"\n1> Withdraw \n2> Deposit \n3> None \n\nEnter Your Choice : ";
			cin>>ch;
			
			if(ch==1)
			{
				cout<<"\nEnter the Amount to Withdraw : ";
				cin>>with;
				cout<<with<<"Rs. has been Withdrawed.";
				acc_bal=acc_bal-with;	
			}
			
			else if(ch==2)
			{
				cout<<"\nEnter The Amount to Deposit : ";
				cin>>dep;
				cout<<dep<<"Rs. have been Deposited";
				acc_bal=acc_bal+dep;		
			}
			
			return acc_bal;
		}
		
		int getacc_no()
		{
			return acc_no;
		}
		
		void setacc_bal(float acc_bal)
		{
			this->acc_bal=acc_bal;
		}
		
		void seracc_no(int acc_no)
		{
			this->acc_bal=acc_bal;
		}
		
};

int main()
{
	Account a;
	int i,m,bal,acc;
	char k='y';
	
	do
	{
		bool j=false;
		cout<<"\n1> Create \n2> Display \n3> Search \nEnter Your Choice : ";
		cin>>m;
		
		if(m==1)
		{
			ofstream file;
			file.open("E:\\File4.dat");
			
			while(k=='y' or k=='Y')
			{
				a.accept();
				file.write((char *)&a,sizeof(a));
				cout<<"\nDo You Want to Enter More?[y,n] : ";
				cin>>k;
			}	
		}
		
		else if(m==2)
		{
			ifstream file;
			file.open("E:\\File4.dat");
			file.read((char *)&a,sizeof(a));
			
			while(file)
			{
				a.display();
				file.read((char *)&a,sizeof(a));
			}
			
			file.close();
		}
		
		else if(m==3)
		{
			cout<<"\nEnter the Account Number to Search : ";
			cin>>acc;
			ifstream file;
			file.open("E:\\File4.dat");
			file.read((char *)&a,sizeof(a));
			
			while(file)
			{
				if(a.getacc_no()==acc)
				{
					bal=a.search();
					a.setacc_bal(bal);
					a.display();
					j=true;
					break;
				}
				file.read((char *)&a,sizeof(a));
			}
			file.close();
		
			if(j==true)
			{
				cout<<"\nAccount Found!";
			}
			else
			{
				cout<<"\nAccount Not Found!";
			}
		}
		cout<<"\nDo You Want To Continue?[1] : ";
		cin>>i;
	}while(i==1);

	return 0;
}
