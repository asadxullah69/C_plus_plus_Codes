#include<iostream>
using namespace std;
int main()
{
    char arr[50]={'\0'};
    int count=0;
    cout<<"Enter the characters in small leters: ";
    cin.getline(arr,50);
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]>'A'&&arr[i]<='Z')
        {
            cout<<"Invalid input. Enter small letters only"<<endl;
            return 1;
        }
    }
    cout<<"Vowels are ";
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
        {
            cout<<arr[i];
            cout<<" ";
        }
        
    }

}