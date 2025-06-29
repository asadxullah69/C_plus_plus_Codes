#include <iostream>
using namespace std;
int main()
{
    int num,max=0, max2=0,numcount;
    cout<<"Enter how many numbers you want to enter: ";
    cin>>numcount;
    for (int i=0;i<numcount;i++)
    {
        cout<<"Enter a number: ";
        cin>>num;
        if(num>max)
        {
            max2=max;
            max=num;

        }
        else if(num>max2 && num<max)
        {
            max2=num;
        }
        else
        {
            cout<<"There is no seconmd largest number."<<endl;
            return 0;
            
        }
    }

    cout<<"The second largest number is: "<<max2<<endl;
    system("pause");
    return 0;

}