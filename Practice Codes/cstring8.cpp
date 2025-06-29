#include <iostream>
using namespace std;

int main() 
{
    char arr[100] = {'\0'};
    cout << "Enter a line: ";
    cin.getline(arr, 100);
    int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==' ')
        count++;
    }
    cout<<"Total words are "<<count+1;
    

    
}