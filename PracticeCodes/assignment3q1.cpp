#include <iostream>
using namespace std;
int main()
{
    int roll,c1,c2,c3,c4,c5,student;
    int sum=0,max=0;
    for (int i=1;i<=5;i++)
    {
        cout<<"Enter the roll number and then number of student: ";
        cin>>roll>>c1>>c2>>c3>>c4>>c5;
        sum = c1+c2+c3+c4+c5;
        if (sum>max)
        {
            max=sum;
            student = roll;
        }
    }

    cout<<"The highest number got are "<<max<<" by roll number "<<student<<endl;
    system("pause");
    return 0;
}