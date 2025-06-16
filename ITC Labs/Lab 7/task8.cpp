#include <iostream>
using namespace std;
int main()
{
    int num;
    unsigned long long fac=1;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        fac= i*fac;
    }
    cout<<"Factorial of "<<num<<" is "<<fac;
    return 0;
}