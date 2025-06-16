#include <iostream>
using namespace std;

int main()
{  int arr[11]={};
    for(int i=0;i<10;i++)
    {
        cout<<"Enter the number: ";
        cin>>arr[i];

    }
    for(int i=1;i<10;i++)
    {
        cout<<arr[i-1];
        cout<<arr[i];
        cout<<arr[i+1];
        cout<<endl;
    }
}