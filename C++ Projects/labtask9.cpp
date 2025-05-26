#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float num;
    cout << "Enter a float number: ";
    cin >> num;
    int floornum= floor(num);
    cout<<"The ceiling of " << num << " is: " << floornum << endl;
    system("pause");
    return 0;

}