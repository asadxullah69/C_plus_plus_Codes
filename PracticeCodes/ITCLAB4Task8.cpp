#include<iostream>
using namespace std;
int main()
{
    int hours,min;
    cout<<"Enter hours: ";
    cin>>hours;
    cout<<"Enter minutes: ";
    cin>>min;
    int totalmin=hours*60+min;
    cout<<"Total minutes: "<<totalmin<<endl;
    system("pause");
    return 0;
}