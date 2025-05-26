#include<iostream>
using namespace std;
int main()
{
	float totalbill, units;
	cout << "Enter the units consumed: ";
	cin >> units;
	if (units <= 100)
		totalbill = units * 0.5;
	else if (units <= 200)
		totalbill = (100 * 0.5) + (units - 100) * 0.75;
	else if (units > 200)
		totalbill = (100 * 0.5) + (100 * 0.75) + (units - 200) * 1.0;
	cout << "The total bill is " << totalbill << " dollars" << endl;
	return 0;

}