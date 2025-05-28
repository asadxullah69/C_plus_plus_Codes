#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    int num,sum=0,mul;
    cout<<"Enter a two digit number: ";
    cin>>num;
    int numorg=num;
    int numorg2=num;
    if(num<=9)
    {
        cout<<"Please enter two digit number: ";
        return 0;
    }
    else
    {
        string str = to_string(num);
        for(int i=0;i<str.length();i++)
        {
           mul = pow(numorg%10,str.length());
           sum = mul+sum;
           numorg=numorg/10;

        }
        if(sum==numorg2)
        {
            cout<<"The sum after calculation is "<<sum<<" which is qual to "<<numorg2<<endl;
            cout<<numorg2<<" is a armstrong number";
        }
        else
        {
            cout<<"It's not a armstrong number";
        }
    }
} 