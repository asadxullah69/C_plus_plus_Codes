#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    string str = to_string(num);
    reverse(str.begin(),str.end());
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i];
        
        if(i<str.length()-1)
        {
            cout<<",";
        }

    }
}