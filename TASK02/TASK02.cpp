#include <iostream>
using namespace std;
int main()
{
	int units, Rs, energyCharge, totalPayable;
	cout << "Enter units consumed : ";
	cin >> units;
	if (units >= 0 && units <= 100)
	{
		energyCharge = units * 15;
		totalPayable = energyCharge + 200;
		cout << "Slab : Lifetime";
		cout << "\nEnergy charge : Rs. " << energyCharge;
		cout << "\nTotal payable : Rs." << totalPayable;
	}
	else if (units >= 101 && units <= 300)
	{
		energyCharge = units * 22;
		totalPayable = energyCharge + 200;
		cout << "Slab : Domestic A";
		cout << "\nEnergy charge : Rs. " << energyCharge;
		cout << "\nTotal payable : Rs." << totalPayable;
	}
	else if (units >= 301 && units <= 700)
	{
		energyCharge = units * 30;
		totalPayable = energyCharge + 200;
		cout << "Slab : Domestic B";
		cout << "\nEnergy charge : Rs. " << energyCharge;
		cout << "\nTotal payable : Rs." << totalPayable;
	}
	else if (units < 700)
	{
		energyCharge = units * 42;
		totalPayable = energyCharge + 200;
		cout << "Slab : High Usage";
		cout << "\nEnergy charge : Rs. " << energyCharge;
		cout << "\nTotal payable : Rs." << totalPayable;
	}
	return 0;
}