#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[6]={};
    int org[6]={};
    cout<<"Enter 6 numbers: ";
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    copy(arr,arr+6,org);
    reverse(arr,arr+6);
    bool areEqual=true;
    for(int i=0;i<6;i++)
    {
        if (arr[i]!=org[i])
        areEqual=false;
    }
    if(areEqual)
    cout<<"These numbers are palindrome "<<endl;
    else
    cout<<"These numbers are not palindrome "<<endl;



}