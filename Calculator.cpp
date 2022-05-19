#include <iostream>
#include <string>


using namespace std;
using std::cout; using std::cin; using std::endl; 

int main() {

	char y;

	do {

		char n;
		float num1, num2, no, n1, n2, n3, n4;
		string conversion = "calculator length area temperature volume mass";


		cout << "Please enter what you want to find: length, area, temperature, volume, mass. \n";
		cout << "If you want to use the calculator, enter calculator: ";
		cin >> conversion;

		//This and all others function search for the 'user' enter keyword, then execute.
		if (conversion.find("calculator") != string::npos)
		{
			cout << "Enter the operation you want to perfom. E.g.(5 + 1): ";
			cin >> num1 >> n >> num2;


			switch (n) {
			case '+':
				cout << num1 + num2;
				break;

			case '-':
				cout << num1 - num2;
				break;

			case '/':
				cout << num1 / num2;
				break;

			case '*':
				cout << num1 * num2;
				break;

			default:
				cout << "No such operator exist!, Please try again.";
				break;
			}
		}

		else if (conversion.find("length") != string::npos) {


			string len = "inches feet yards miles";
			cout << "Enter the lenght you want to convert E.g.- inches,feet,yards,miles: ";
			cin >> len;

			if (len.find("inches") != string::npos)
			{

				cout << "Please enter the inches you want to convert to Millimeters: ";
				cin >> no;
				cout << no * 25.00 << " Millimeters";
			}
			else if (len.find("feet") != string::npos)
			{
				cout << "Please enter the feet you want to convert to Centimeters: ";
				cin >> no;
				cout << no * 30.00 << " Centimeters";
			}
			else if (len.find("yards") != string::npos)
			{
				cout << "Please enter the yards you want to convert to Meters: ";
				cin >> no;
				cout << no * 0.90 << " Meters";
			}
			else if (len.find("miles") != string::npos)
			{
				cout << "Please enter the miles you want to convert to Kilometers: ";
				cin >> no;
				cout << no * 1.60 << " Kilometers";
			}
			else
			{
				cout << "Please enter the correct input: ";
			}




		}
		else if (conversion.find("area") != string::npos)
		{
			string ar = "square_inches square_feet square_yards square_miles acres";
			cout << "Enter the lenght you want to convert E.g.- square_inches, square_feet, square_yards, square_miles,acres ";
			cin >> ar;



			if (ar.find("square_inches") != string::npos)
			{
				cout << "Enter the square_inches: ";
				cin >> n1;
				cout << n1 * 6.50 << " square centimeters";
			}
			else if (ar.find("square_feet") != string::npos)
			{
				cout << "Enter the square_feet: ";
				cin >> n1;
				cout << n1 * 0.09 << " sqaure meters";
			}
			else if (ar.find("sqaure_yards") != string::npos)
			{
				cout << "Enter the suqare_yards: ";
				cin >> n1;
				cout << n1 * 0.80 << " sqaure meters";
			}
			else if (ar.find("square_miles") != string::npos)
			{
				cout << "Enter the square_miles: ";
				cin >> n1;
				cout << n1 * 2.60 << " sqaure kilometers";
			}
			else if (ar.find("acres") != string::npos)
			{
				cout << "Enter the acres: ";
				cin >> n1;
				cout << n1 * 0.40 << " hectares";
			}

		}
		else if (conversion.find("temperature") != string::npos)
		{
			string tem = "farh_temp";
			cout << "Enter the Farhrenheit temperature you want to convert E.g.- farh_temp: ";
			cin >> tem;

			if (tem.find("Farh_temp") != string::npos)
			{
				cout << "Enter the temperature: ";
				cin >> n2;
				cout << (n2 - 32) * 0.565 << " Celsius";

			}

		}
		else if (conversion.find("volume") != string::npos)
		{
			string vol = "teaspoon, tablespoon, fluid_ounces, cups pints, quarts, gallons, cubic_feet, cubic_yards";
			cout << "Enter the lenght you want to convert E.g.- teaspoon tablespoon fluid_ounces cups pints quarts gallons cubic_feet cubic_yards ";
			cin >> vol;
			if (vol.find("teaspoon") != string::npos)
			{
				cout << "Enter the teaspoon ";
				cin >> n3;
				cout << n3 * 5.00 << " mililiters";

			}
			else if (vol.find("tablespoon") != string::npos)
			{
				cout << " Enter the tablespoon ";
				cin >> n3;
				cout << n3 * 15.00 << " milliliters";
			}
			else if (vol.find("fluid_ounces") != string::npos)
			{
				cout << "Enter the fluid_ounces ";
				cin >> n3;
				cout << n3 * 30.00 << " mililiters";
			}
			else if (vol.find("cups") != string::npos)
			{
				cout << "Enter the cups ";
				cin >> n3;
				cout << n3 * 0.24 << " liters";
			}
			else if (vol.find("pints") != string::npos)
			{
				cout << "Enter the pints: ";
				cin >> n3;
				cout << n3 * 0.47 << " liters";
			}
			else if (vol.find("quarts") != string::npos)
			{
				cout << "Enter the quarts: ";
				cin >> n3;
				cout << n3 * 0.95 << " liters";
			}
			else if (vol.find("gallons") != string::npos)
			{
				cout << "Enter the gallons: ";
				cin >> n3;
				cout << n3 * 3.80 << " cubic meters";
			}
			else if (vol.find("cubic_feet") != string::npos)
			{
				cout << "Enter the cubic_feet: ";
				cin >> n3;
				cout << n3 * 0.03 << " cubic meters";
			}
			else if (vol.find("cubic_yards") != string::npos)
			{
				cout << "Enter the cubic_yards: ";
				cin >> n3;
				cout << n3 * 0.75 << " cubic meters";
			}


		}
		else if (conversion.find("mass") != string::npos)
		{
			string ma = "ounces pounds short_tons";
			cout << "Enter the mass you want to convert E.g.- ounces pounds short_tons: ";
			cin >> ma;

			if (ma.find("ounces") != string::npos)
			{
				cout << " Enter the mass: ";
				cin >> n4;
				cout << n4 * 28.00 << " grams";

			}
			else if (ma.find("pounds") != string::npos)
			{
				cout << "Enter the pounds: ";
				cin >> n4;
				cout << n4 * 0.45 << " kilograms";

			}
			else if (ma.find("short_tons") != string::npos)
			{
				cout << "Enter the short_ton: ";
				cin >> n4;
				cout << n4 * 0.09 << " tonnes";
			}


		}

		
		cout << "\n Would you like to continue your Calculation(y/n):  ";
		cin >> y;

		if (y != 'Y' && y != 'y' && y != 'N' && y != 'n')
			cout << y << " is not a valid option. Try again." << endl;


	}while (y != 'N' && y != 'n');


	return 0;
	

}