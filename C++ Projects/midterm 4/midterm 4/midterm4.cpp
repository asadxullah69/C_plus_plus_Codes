#include<iostream>
using namespace std;
int main()
{
	int score;
	cout << "Enter your score: ";
	cin >> score;
	if (score >= 90)
		cout << "You got A grade";
	else if (score >= 80 && score <= 89)
		if (score > 85)
			cout << "You got B+";
		else
			cout << "You got B";
	else if (score >= 70 && score <= 79)
		cout << "You got C grade";
	else if (score < 70)
		cout << "You got F";
	else
		cout << "You entered invalid score" << endl;
	return 0;

}