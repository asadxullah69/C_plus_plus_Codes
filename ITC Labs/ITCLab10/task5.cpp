#include <iostream>
using namespace std;

int main()
{
    int arr[10]={23, 45, 67, 78, 3, 567, 0, -1, 4, 67};
    int sum=0;
    float avg;
    for(int i=0;i<10;i++)
    {
        sum = arr[i]+sum;
 
    }
    cout<<"Sum of numbers is: "<<sum<<endl;
    avg=sum/10.0;
    cout<<"Average of values is "<<avg<<endl;

}