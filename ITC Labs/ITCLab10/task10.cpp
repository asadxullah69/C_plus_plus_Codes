#include <iostream>
using namespace std;

int main()
{  int arr[10]={};
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the number: ";
        cin>>arr[i];
        if(arr[i]>9)
        {
            cout<<arr[i];
            cout<<" ";
        }

    }

}