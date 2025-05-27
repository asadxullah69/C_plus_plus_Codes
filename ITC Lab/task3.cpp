#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if (num<0)
    {
        cout<<"Please enter number greater than 0";
        return 0;
    }
    else
    {
        cout<<"Digits in reverse order are: ";
        while(num>0)
        {
            cout<<num%10;
            num = num/10;
        }
    }
    cout<<endl;
    system("pause");
    return 0;
}