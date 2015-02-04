// Brandan Tyler Lasley
// Sources: None
// 10/20/2013 18:29
// Calculates a fare and fuel charge for a ferry.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () {

	// Vars

	// People & Fuel
	double personAdult = 13.00;
	double personChild = 6.50;
	double personFuel = 1.25;

	// Vehicles
	double vehicle = 43.00;
	double vehicleLarge = 2.15;
	double vehicleFuel = 4.15;

	// Trucks and trailers.
	double vehicleOversize = 69.00;
	double VehicleOversizeFuel = 10.40;
	double vehicleOversizeLarge = 3.45;

	// Calc Vars
	string answer;
	double temp;
	double totalFare = 0;
	double totalFuel = 0;
	double vehicleLength = 0;

	// Add 0 to end of single digit numbers, also prevent it from going over 2 (it wouldn't anyways)
	cout << fixed << setprecision(2);

	cout << "Welcome to Brandan's Fare Calculator" << endl;
	
	cout << "How many adults (age 12+) are in your party: ";
	cin >> temp;
	// Add fare and fuel
	totalFare = totalFare + (personAdult * temp);
	totalFuel = totalFuel + (personFuel * temp);

	cout << "How many children (age 5-11) are in your party: ";
	cin >> temp;
	// Add fare and fuel
	totalFare = totalFare + (personChild * temp);
	totalFuel =  totalFuel +(personFuel * temp);

	cout << "Are you driving a vehicle onto the ferry? (y/n): ";
	cin >> answer;

	if ((answer == "Y") || (answer == "y")) {
		// Add declare vehicle length
		cout << "What is the length of the vehicle in feet?: ";
		cin >> vehicleLength;
		cout << "Is the vehicle over 7 feet high? (y/n): ";
		cin >> answer;

		// Calculate Vehicle Lengh price
	if ((answer == "Y") || (answer == "y")) {
		if (vehicleLength < 20) {
			totalFare = totalFare + (vehicleOversize);
		} else {
			totalFare = totalFare + (vehicleOversize + (vehicleOversizeLarge * (vehicleLength - 20)));
		}
			totalFuel = totalFuel + (VehicleOversizeFuel);
		} else {
			if (vehicleLength < 20) {
				totalFare = totalFare + (vehicle);
			} else {
				totalFare = totalFare + (vehicle + (vehicleLarge * (vehicleLength - 20)));
			}
				totalFuel = totalFuel + (vehicleFuel);
		}
	}

	// Print out total
	cout << "Your fare is $" << totalFare << " plus a fuel surcharge of $" << totalFuel << endl;
	cout << "The total amount payable is $" << (totalFare + totalFuel) << endl;
	cout << "Thank you for using Brandan's Fare Calculator" << endl;

	// would print out a recept, but i dont remember whats suppose to go on it.

	// Exit footer
	getchar();
	getchar();
	return 0;
}