#include <iostream>
#include<cstring>
using namespace std;

int main() 
{
    char arr[50] = {'\0'};
    cout << "Enter username: ";
    cin.getline(arr, 50);
    int len=strlen(arr);
    if(len>=6 && len<=12)
    {
        cout<<"It's a valid username";
    }
    else
    cout<<"It's invalid username";


    
}