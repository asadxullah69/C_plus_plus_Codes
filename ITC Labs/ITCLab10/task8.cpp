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
    int first=arr[0];
    int last=arr[9];
    
    for(int i=1;i<=8;i++)
    {
        if(arr[i]==0)
        {
            continue;
        }
        if((first!=0 && arr[i]%first==0) || (last!=0 && arr[i]%last==0))
        {
            if(arr[i]>10&&arr[i]<100)
            {
              cout<<arr[i];
              cout<<" ";  
            }
            

        }
    }
    
}