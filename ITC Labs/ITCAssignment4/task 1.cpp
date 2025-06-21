#include<iostream>
using namespace std;
int main()
{
	
	int invoice[100] = {};
	int sum = 0 ,count=0;
	float avg = 0.0;
	for (int i = 0; i < 100; i++)
	{
		cout << "Enter customer's invoice amount (Press -1 to stop): ";
		cin >> invoice[i];
		
		
		
		if (invoice[i] == -1)
		{
			break;
		}
		sum = invoice[i] + sum;
		count++;

	
	}

	avg = sum / count;
	cout << "Avergage is " << avg << endl;
	cout << "Sum of all invoices is " << sum << endl;
}

