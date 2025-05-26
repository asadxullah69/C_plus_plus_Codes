#include<iostream>
using namespace std;
int main()
{
    int input;
    cout << "Enter a value: ";
    cin >> input;
    cout<<"What type of conversion do you want to do: ";
    char choice;
    cin>>choice;
    if (choice == 'I')
    cout<<"Conversion from inches to centimeters is: "<<input*2.54<<endl;
    else if (choice == 'C')
    cout<<"Conversion from centimeters to inches is: "<<input/0.393701<<endl;
    else if (choice == 'G')
    cout<<"Conversion from gallons to liters is: "<<input*3.78541<<endl;
    else if (choice == 'L')
    cout<<"Conversion from liters to gallons is: "<<input/0.264172<<endl;
    else if (choice == 'F')
    cout<<"Conversion from mile to kilometer is: "<<input*1.60934<<endl;
    else if (choice == 'K')
    cout<<"Conversion from kilometer to mile is: "<<input/0.621371<<endl;
    else if (choice == 'P')
    cout<<"Conversion from pounds to kilograms is: "<<input*0.453592<<endl;
    system("pause");
    return 0;
    



}