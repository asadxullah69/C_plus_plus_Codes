#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char arr[30]={'\0'};
    char org[30]={'\0'};
    cout<<"Enter the word (Less than 30 words): ";
    cin.getline(arr,30);
    strcpy(arr,org);
    int len=strlen(arr);
    reverse(arr,arr+len);
    if(strcmp(org,arr)==0)
    {
        cout<<"It's a palindrome"<<endl;
    }
    else
    cout<<"It's not a palindrome"<<endl;
    


}