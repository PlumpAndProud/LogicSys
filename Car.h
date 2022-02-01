#include <iostream>
using namespace std;

class Car
{
public:
	//parameters
	int id;
	int plate;
	std::string type;

	//constructor
	Car()
	{
		this->id = 0;
		this->plate = 0;
		this->type = " ";
	}

	//methods
	void whoAmI();
	void changeId();
	void changePlate();
	void changeType();
	void addVehicle();
};

void Car::changeId()
{
	string select;
	cout << "Do you want to change ID of this vehicle? (Yes/No)" << endl;
	cin >> select;
	if (select == "Yes")
	{
		cin >> this->id;
		cout << "ID has been changed to " << this->id << endl;
	}

}

void Car::changePlate()
{
	string select;
	cout << "Do you want to change Plate number of this vehicle? (Yes/No)" << endl;
	cin >> select;
	if (select == "Yes")
	{
		cin >> this->plate;
		cout << "Plate number has been changed to " << this->plate << endl;
	}
}

void Car::changeType()
{
	string select;
	cout << "Do you want to change Type of this vehicle? (Yes/No)" << endl;
	cin >> select;
	if (select == "Yes")
	{
		cin >> this->type;
		cout << "Vehicle type has been changed to " << this->type << endl;
	}
}

void Car::addVehicle()
{
	string select;
	cout << "Do you want to add vehicle? (Yes/No)" << endl;
	cin >> select;
	if (select == "Yes")
	{
		cout << "Vehicle id: " << endl;
		cin >> this->id;
		cout << "Vehicle plate: " << endl;
		cin >> this->plate;
		cout << "Vehicle type: " << endl;
		cin >> this->type;
	}
}

void Car::whoAmI()
{
	cout << "I am a " << this->type << endl;
	cout << "My plate number is: " << this->plate << endl;
	cout << "And my id is: " << this->id << endl;
}