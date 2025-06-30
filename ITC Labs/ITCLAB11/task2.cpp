#include<iostream>
using namespace std;

int main()
{
    int arr[5]={};
    cout<<"Enter 5 numbers: ";
    int temp;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    temp=arr[4];

    for(int i=4;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}