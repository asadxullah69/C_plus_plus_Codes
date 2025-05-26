#include <iostream>
using namespace std;
int main()
{
    int side1, side2, side3;
    cout<<"Enter the three sides: ";
    cin>>side1>>side2>>side3;
    int perimeter = side1+side2+side3;
    cout<<"The perimeter is: "<<perimeter<< endl;
    int base,height;
    
    cout<<"Enter length and width: ";
    cin>>base>>height;
    float area = 0.5*base*height;
    cout<<"The area is "<<area<<endl;
    
    
    
    
    
    
    system("Pause");
    return 0;



}