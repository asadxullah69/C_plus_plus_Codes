#include <iostream>
using namespace std;

int main() 
{
    int arr[10]={23, 45, 67, 78, 3, 567, 0, -1, 4 ,67};
    for(int i=9;i>=0;i--)
    {
        cout<<arr[i];
        cout<<" ";
    }
}