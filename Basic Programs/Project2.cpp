#include <iostream> 

using namespace std; 

// Class is User Defined Datatype
// Class is Just a Template

class student //Class is Collection of Attributes, Variables, Collections, Functions and Behaviors
{
	private: // Cannot Access outsite the Class
		//Attributes or Variables
		int rno;
		char name[10];
		int sub1, sub2, sub3, total;
		float per;
	
	public:
		//Functions
		void accept()
		{
			cout<<"Enter Student Roll.no : ";
			cin>>rno;
			cout<<"Enter Student Name : ";
			cin>>name;
			cout<<"Enter Student Maks for Three Subjects : \n";
			cin>>sub1>>sub2>>sub3;
		}
		
		void calculate()
		{
			total = sub1 + sub2 + sub3;
			per = total / 3;
		}
		
		void display()
		{
			cout<<"\nRoll Number : "<<rno;
			cout<<"\nName : "<<name;
			cout<<"\nMath : "<<sub1;
			cout<<"\nSci : "<<sub2;
			cout<<"\nEng : "<<sub3;
			cout<<"\nTotal : "<<total;
			cout<<"\nPercentage : "<<per<<"%";	
		}	
}; //Private Variables We Can Use Only Inside The Class


int main(int argc, char** argv) 
{
	
	int n1;        // Allocate memory for int(pre-defined datatype) variable
	student s1;    // Allocate memory for one Student(user-defined datatype) 
	
	s1.accept();
	s1.calculate();
	s1.display();
	
	return 0;
}
