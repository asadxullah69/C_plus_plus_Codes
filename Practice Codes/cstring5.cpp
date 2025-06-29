#include <iostream>
using namespace std;

int main() 
{
    char arr[50] = {'\0'};
    cout << "Enter a username: ";
    cin.getline(arr, 50);
    cout<<"The repeating character is ";
    bool printed[256]={false};
    for(int i=0;arr[i]!='\0';i++)
    {
        int count=0;
        if(printed[(unsigned char)arr[i]])
        continue;
        for(int j=0;arr[j]!='\0';j++)
        {
            if(arr[i]==arr[j]&&i!=j)
            {
                count++;
            }
        }
        if(count>=1)
        {
            cout<<arr[i]<<" ";
            printed[(unsigned char)arr[i]]=true;
        }
    }
}