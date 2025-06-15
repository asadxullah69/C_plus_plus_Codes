#include <iostream>
using namespace std;

int main() 
{
    int list[10]={23,45,67,78,3,567,0,-1,4,67};
    cout<<"Odd numbers are: ";
    for(int i=0;i<10;i++)
    {
        if (list[i]%2!=0)
        {
            cout<<list[i];
            cout<<" ";
        }

    }
    return 0;
}