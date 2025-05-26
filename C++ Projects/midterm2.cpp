#include<iostream>
using namespace std;
int main()
{
	int days, total;
	cout << "Enter the number of days you want to rent the car: ";
	cin >> days;
	if (days <= 3)
		cout << "The total rent is " << days * 50 << " dollars";
	else if (days >= 4 && days <= 7)
		cout << "The total rent is " << days * 40 << " dollars";
	else if (days >7)
		cout << "The total rent is " << days * 30 << " dollars";
	return 0;

		
}