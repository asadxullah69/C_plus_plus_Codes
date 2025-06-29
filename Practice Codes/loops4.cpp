#include <iostream>
using namespace std;
int main()
{
    start:
    int i=1,num,sum=0;
    cout<<endl;
    cout<<"Enter a number greater than or equal to 1 = ";
    cin>>num;
    if (num<1)
    {   
        cout<<"You entered less than 1";
        goto start;
    }
    while(i<=num)
    {
        sum = sum+i;
        i++;
  
    }
    cout<<"Sum of previous digits of "<<num<<" is "<< sum<<endl;
    system("pause");
    return 0;


}   