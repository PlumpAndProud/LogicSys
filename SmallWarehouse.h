using namespace std;

class SmallWarehouse : public Warehouse
{
	void parkVehicle();
};

void SmallWarehouse::parkVehicle()
{
	int getch();

	int type;
	string select;
	cout << "Do you want to add vehicle to this warehouse? (Yes/No)" << endl;
	cin >> select;

	if (select == "Yes")
	{
		cout << "What is the type of the vehicle?: " << endl;
		cout << "1.Civil Car" << endl;
		cout << "2.Supply Car" << endl;
		cout << "3.Truck" << endl;
		type = getchar();
		switch (type)
		{
		case '1':
		{
			this->storing = "Civil Car";
			break;
		}
		case '2':
		{
			this->storing = "Supply Car";
			break;
		}
		case '3':
		{
			cout << "This warehouse is too small for truck" << endl;
			break;
		}
		}
	}
}