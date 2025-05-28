#include <iostream>
using namespace std;
int main()
{
    int num,sqr=0,sum=0;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"The number is: "<<num<<endl;
    while (num>0)
    {
        int lastd=num%10;
        sqr= lastd*lastd;
        sum = sqr+sum;
        cout<<"The square of digit "<<lastd<<" is "<<sqr<<endl;
        num = num/10;
    }
    cout<<endl;
    cout<<"Sum of square of digits is "<<sum<<endl;
    return 0;
}