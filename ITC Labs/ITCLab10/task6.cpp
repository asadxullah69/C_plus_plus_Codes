#include <iostream>
using namespace std;

int main()
{
    int arr[10]={23, 45, 67, 78, 3, 567, 0, -1, 4, 67};
    int sum=0;
    float avg;
    float count =0.0;
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        {
            sum = arr[i]+sum;
            count++;
        }
    
 
    }
    avg=sum/count;
    cout<<"Sum of even numbers is: "<<sum<<endl;
    
    cout<<"Average of even values is "<<avg<<endl;

}