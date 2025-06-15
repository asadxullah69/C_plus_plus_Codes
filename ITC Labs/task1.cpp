#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=num;i>=0;i--)
    {
        cout<<i;
    }
    for(int i=1;i<=num;i++)
    {
        cout<<i<<endl;
    }
    system("pause");
    return 0;
}   
