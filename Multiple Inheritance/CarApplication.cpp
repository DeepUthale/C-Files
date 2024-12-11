#include <iostream>

using namespace std;

class Vehicle
{
	private:
		char color[10], model[5];
		int price;
	
	public:
		void accept_Vehicle()
		{
			cout<<"\nEnter Vehicle Model : ";
			cin>>model;
			cout<<"\nEnter Color : ";
			cin>>color;
			cout<<"\nEnter Price : ";
			cin>>price;
		}
		
		void display_Vehicle()
		{
			cout<<"\nVehicle Model : "<<model;
			cout<<"\nVehicle Color : "<<color;
			cout<<"\nVehicle Price : "<<price;
		}
};

class Car:public Vehicle
{
	private:
		char music_system[5];
	
	public:
		void accept_Car()
		{
			accept_Vehicle();
			cout<<"\nEnter Music System : ";
			cin>>music_system;
		}
		
		void display_Car()
		{
			display_Vehicle();
			cout<<"\nMusic System (Yes or No) : "<<music_system;
		}
};

class Small:public virtual Car
{
	private:
		int seating_capacity;
		int milage;
		
	public:
		void accept_SmallCar()
		{
			//accept_Car();
			cout<<"\nEnter Seating Capacity : ";
			cin>>seating_capacity;
			cout<<"\nEnter Milage : ";
			cin>>milage;
		}
		
		void display_SmallCar()
		{
			//display_Car();
			cout<<"\nSeating Capacity : "<<seating_capacity;
			cout<<"\nMilage : "<<milage;
		}
};

class Medium:public virtual Car
{
	private:
		int airbag;
		char power_steering[5];
		
	public:
		void accept_MediumCar()
		{
			//accept_Car();
			cout<<"\nEnter Number of Airbags : ";
			cin>>airbag;
			cout<<"\nPower Steering (Yes or No) : ";
			cin>>power_steering;
		}
		
		void display_MediumCar()
		{
			//display_Car();
			cout<<"\nNumber of Airbags : "<<airbag;
			cout<<"\nPower Steering : "<<power_steering;
		}
};

class Luxury:public Small, public Medium
{
	private:
		char sun_roof[5];
		
	public:
		void accept()
		{
			accept_Car(); // Car accept
			accept_MediumCar(); // Medium accept
			accept_SmallCar(); // Small accept
			cout<<"\nSun Roof (Yes or No) : ";
			cin>>sun_roof;
			
		}
		
		void display()
		{
			display_Car();
			display_MediumCar();
			display_SmallCar();
			cout<<"\nSun Roof : "<<sun_roof;
		}
};

int main()
{
	int ch;
	do{
	cout<<"\n1 - Small Car\n2 - Medium Car\n3 - Luxury Car";
	cout<<"\nEnter Your Choice : ";
	cin>>ch;
	
	if(ch==1)
	{
		Small s;
		s.accept_Car();
		s.accept_SmallCar();
		
		cout<<"\n------------Small Car Section------------";
		s.display_Car();
		s.display_SmallCar();
	}
	
	if(ch==2)
	{
		Medium m;
		m.accept_Car();
		m.accept_MediumCar();
		
		cout<<"\n------------Medium Car Section------------";
		m.display_Car();
		m.display_MediumCar();
	}
	if(ch==3)
	{
		Luxury lcar;
		lcar.accept();
		lcar.display();
	}
	cout<<"\n------------!------------";
	cout<<"\n\nDo You Want To Continue...Press 1 : ";
	cin>>ch;
}while(ch==1);
	cout<<"\n------------Thank You! Visit Again!------------";
	return 0;
}
