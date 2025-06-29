#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main() 
{
    char arr[50] = {'\0'};
    cout << "Enter a word: ";
    cin.getline(arr, 50);
    int len=strlen(arr);
    reverse(arr,arr+len);
    for(int i=0;arr[i]!='\0';i++)
    {
        cout<<arr[i];
    }

    
}