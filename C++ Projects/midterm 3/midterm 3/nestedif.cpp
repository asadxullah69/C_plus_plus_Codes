#include<iostream>
using namespace std;
int main()
{
	int day, age;
	float discount;
	cout << "Enter your age:";
	cin >> age;
	cout << "Enter the day (1 for Monday....7 for sunday): ";
	cin >> day;
	if (day >= 1 && day <= 5)
		if ((age < 12) || (age > 65))
		{
			discount = (50.0 / 100.0) * 20.0;
			cout << "The discount is " << discount << " dollars";
		}

	if (day > 5 && day <= 7)
		if ((age < 12) || (age > 65))
		{
			discount = (50.0 / 100.0) * 24.0;
			cout << "The discount is " << discount << " dollars";
		}

	return 0;
}
