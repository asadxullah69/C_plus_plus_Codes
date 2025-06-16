#include <iostream>
using namespace std;

int main()
{
    int arr[10]={};
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the number: ";
        cin>>arr[i];

    }
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            cout<<arr[i]+1;
            cout<<" ";
        }
        else
        {
            cout<<arr[i]-1;
            cout<<" ";
        }
    }
}