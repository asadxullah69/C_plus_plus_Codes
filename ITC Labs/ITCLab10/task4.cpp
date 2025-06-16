#include <iostream>
using namespace std;

int main()
{
    int arr[10]={23, 45, 67, 78, 3, 567, 0, -1, 4, 67};
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i];
            cout<<" ";
        }
    }
}