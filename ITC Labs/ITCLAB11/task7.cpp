#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr1[6]={};
    int arr2[6]={};
    cout<<"Enter first 6 numbers: ";
    for(int i=0;i<6;i++)
    {
        cin>>arr1[i];
    } 
    cout<<"Enter second 6 numbers: ";
     for(int i=0;i<6;i++)
    {
        cin>>arr2[i];
    } 
    int count1=0,count2=0,same=0;
    for(int i=0;i<6;i++)
    {
        if(arr1[i]>arr2[i])
        {
            count1++;
        }
        else if(arr2[i]>arr1[i])
        {
            count2++;

        }
        else if(arr1[i]==arr2[i])
        {
            same++;
        }
    }
    cout<<"Winners in array 1: "<<count1<<endl;
    cout<<"Winners in array 2: "<<count2<<endl;
    cout<<"Same : "<<same<<endl;


}
