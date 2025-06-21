#include<iostream>
using namespace std;
int main()
{
    char source[5]={'a','b','c','\0'};
    char destination[5]={'d','e','f','\0'};
    char temp[5]={};
    for(int i=0;i<5;i++)
    {
        temp[i]=source[i];
        source[i]=destination[i];
        destination[i]=temp[i];
        cout<<source[i];
        cout<<" ";

    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<destination[i];
        cout<<" ";
    }
    cout<<endl;


}