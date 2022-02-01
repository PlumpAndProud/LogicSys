#include <iostream>
using namespace std;

class Warehouse
{
public:

	//parameters
	int id;
	int adres;
	string size;
	string storing;

	//constructor
	Warehouse()
	{
		this->id = 0;
		this->adres = 0;
		this->size = " ";
		this->storing = " ";
	}

	//methods
	void parkVehicle();

};