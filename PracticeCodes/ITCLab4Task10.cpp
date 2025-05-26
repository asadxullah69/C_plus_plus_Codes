#include<iostream>
using namespace std;
int main()
{
    int lenght,width;
    cout<<"Enter the length of the rectangle in cm: ";
    cin>>lenght;
    cout<<"Enter the width of the rectangle in cm: ";
    cin>>width;
    int perimeter=2*(lenght+width);
    int area=lenght*width;
    cout<<"The lenght of the rectangle is: "<<lenght<<" cm"<<endl;
    cout<<"The width of the rectangle is: "<<width<<" cm"<<endl;
    cout<<"The area of the rectangle is: "<<area<<" cm^2"<<endl;
    cout<<"The perimeter of the rectangle is: "<<perimeter<<" cm"<<endl;
    system("pause");
    return 0;
}