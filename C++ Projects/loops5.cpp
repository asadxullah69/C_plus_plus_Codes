#include <iostream>
using namespace std;
int main()
{
    int i,num,mul=10;
    cout<<"Enter the number you want the table for: ";
    cin>>num;
    i=1;
    while (i<=mul)
    {
        
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
        i++;
    }
    system("pause");
    return 0;
}