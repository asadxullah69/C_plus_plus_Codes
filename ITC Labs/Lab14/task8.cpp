#include<iostream>
using namespace std;
int main()
{
    char arr[50]={'\0'};
    int countC=0,counts=0;
    cout<<"Enter the characters in small leters: ";
    cin.getline(arr,50);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>='A'&&arr[i]<='Z')
        {
            countC++;
        }
    }
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>='a'&&arr[i]<='z')
        {
            counts++;
        }
        
    }
    cout<<"Number of capital letters are "<<countC<<endl;
    cout<<"Number of small letters are "<<counts<<endl;

}