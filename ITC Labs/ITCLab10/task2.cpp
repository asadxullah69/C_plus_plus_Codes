#include <iostream>
using namespace std;

int main() 
{
    int list[7]={1,4,2,6,7,8,9};
    cout<<"Last roll number is: "<<list[6]<<endl;
    list[4]=40;
    list[2]=(list[0]+list[1])-2;
    for(int i=0;i<7;i++)
    {
        cout<<list[i];
        cout<<" ";
    }
}