#include<iostream>
using namespace std;
int main()
{
    char arr[50]={'a','b','c','\0'};
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    for(int i=count;i>=0;i--)
    {
        cout<<arr[i];
        cout<<" ";
    }
}