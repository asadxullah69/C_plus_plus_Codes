#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[6]={};
    int arr2[6]={};
    cout<<"Enter 6 numbers: ";
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<3;i++)
    {
        
        arr2[i]=arr[i];
    }
    int start=3,end=5;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=3;i<6;i++)
    {
        
        arr2[i]=arr[i];
    }
    for(int i=0;i<6;i++)
    {
        
        cout<<arr2[i]<<" ";
    }

}