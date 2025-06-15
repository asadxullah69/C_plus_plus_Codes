#include <iostream>
using namespace std;

int main() 
{
    int rows = 4;
    int cols = 8;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=cols;j++)
        {
            if((i==1 || i==4)&&(j>1))
            cout<<"*";
            else if((i==2 ||i==3) &&(j==2 ||j==8))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;

    }
    return 0;
}