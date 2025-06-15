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
    cout<<"The number is "<<num<<" and it's revesre is "<<str<<endl;
    
    return 0;
}