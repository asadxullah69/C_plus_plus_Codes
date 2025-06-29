#include <iostream>
using namespace std;
int main()
{
    int numcount,i,div;
    float sum=0.0;
    cout<<"Enter how many times you want to add sequence: ";
    cin>>numcount;
    div = 2;
    for (i=1;i<=numcount;i++)
    {
        sum = 1.0/div+sum;
        div = div+2.0;
    }
    cout<<"The sum of sequence is "<<sum<<endl;
    system("pause");
    return 0;
}