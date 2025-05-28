#include <iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"The number was: "<<num<<endl;
    cout<<"The number in reverse digits is: ";
    while (num>0)
    {
        int lastd=num%10;
        cout<<lastd;
        sum = lastd+sum;
        num = num/10;
        if (num>0) cout<<",";
    }
    cout<<endl;
    cout<<"Sum of the digit is "<<sum<<endl;
    return 0;
}