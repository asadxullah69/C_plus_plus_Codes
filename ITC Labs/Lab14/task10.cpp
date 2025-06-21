#include<iostream>
using namespace std;
int main()
{
    char source[5]={'a','b','c','\0'};
    char destination[5]={'d','e','f','\0'};
    int len=0;
    for(int i=0;source[i]!='\0';i++)
    {
        len++;
    }
    int start=0,end=len-1;
    char temp[1]={};
    for(start=0;start<len/2;start++)
    {
        temp[0]=source[start];
        source[start]=source[end];
        source[end]=temp[0];
        end--;

    }
    for(int i=0;i<5;i++)
    {
        destination[i]=source[i];

    }
    cout<<"Final result is: ";
    for(int i=0;i<5;i++)
    {
        cout<<destination[i];
        cout<<" ";
    }
    cout<<endl;


}