#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int numorg=num;
    cout<<"The number was: "<<num<<endl;
    cout<<"The number in reverse digits is: ";
    while (num>0)
    {
        cout<<num%10;
        num = num/10;
        if (num>0) cout<<",";
    }
    cout<<endl;
    string num1 = to_string(numorg);
    cout<<"The number in digits is: ";
    for(int i=0;i<num1.length();i++)
    {
        cout<<num1[i];
        if(i<num1.length()-1) cout<<",";
    }
    
    return 0;
}   