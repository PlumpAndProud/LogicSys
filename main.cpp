#include <iostream>
#include "Car.h"
#include "Truck.h"
#include "CivilCar.h"
#include "SupplyCar.h"
#include "Warehouse.h"
#include "SmallWarehouse.h"
#include "LargeWarehouse.h"

Car* vehicle1;

int main()
{
	Car *vehicle1 = new Truck();
	vehicle1->addVehicle();
	::vehicle1 = vehicle1;
	vehicle1->whoAmI();
}
