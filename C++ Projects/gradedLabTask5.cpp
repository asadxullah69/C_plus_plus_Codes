#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if ((a>b && a<c) || (a>c && a<b))
    {
        cout<<a<<" is the second largest number.";
    }
    else if ((b>a && b<c) || (b>c && b<a))
    {
        cout<<b<<" is the second largest number.";
    }
    else if ((c>a && c<b) || (c>b && c<a))
    {
        cout<<c<<" is the second largest number.";
    }
    system("pause");
    return 0;


}