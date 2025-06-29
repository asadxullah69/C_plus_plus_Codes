#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float num;
    cout << "Enter a float number: ";
    cin >> num;
    int ceilingnum= ceil(num);
    cout<<"The ceiling of " << num << " is: " << ceilingnum << endl;
    system("pause");
    return 0;

}