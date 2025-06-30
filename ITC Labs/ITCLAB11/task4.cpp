#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[5]={};
    int arr2[5]={};
    cout<<"Enter 5 numbers: ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,arr+5);
    copy(arr,arr+5,arr2);
    for(int i=0;i<5;i++)
    {
        cout<<arr2[i]<<" ";
    }
    
}