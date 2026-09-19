#include <iostream>
using namespace std;
int main()
{
	int d, charge = 150, totalFare, extra_km, extraCharge;
	cout << "Enter distance (in km)";
	cin >> d;
	extra_km = d - 5;
	extraCharge = extra_km * 35;
	totalFare = extraCharge + charge;
	if (d <= 5)
	{
		cout << "Boarding fare only";
		cout << "\nTotal fare : Rs." << charge;
	}
	else
	{
		cout << "Extra km : " << extra_km;
		cout << "\nExtra charge : Rs." << extraCharge;
		cout << "\nTotal fare : Rs." << totalFare;
	}
	return 0;
}