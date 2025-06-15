#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter firt number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    if (num1>num2)
    {
        for(int i=num2;i<=num1;i++)
        {
            if(i%3==0 || i%5==0)
            {
                cout<<"The number divisable by 3 or 5 are "<<i<<endl;
            }
        }
    }
    else if (num2>num1)
    {
        for(int i=num1;i<=num2;i++)
        {
            if(i%3==0 || i%5==0)
            {
                cout<<"The number divisable by 3 or 5 are "<<i<<endl;
            }
        }
    }
    system("pause");
    return 0;
}