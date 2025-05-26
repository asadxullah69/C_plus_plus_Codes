#include <iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter the number you want the table for: ";
    cin>>num;
    for(i=1;i<=10;i++)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    system("pause");
    return 0;
}