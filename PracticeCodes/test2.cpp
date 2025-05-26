#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d,r1,r2;
    cout<<"Enter value of a, b and c:";
    cin>>a>>b>>c;
    d = b*b-4*a*c;
    if (d>=0)
    {   
        r1= -b +sqrt(d);
        r2 = -b -sqrt(d);
        cout<<"Square roots are "<<r1<<" and "<<r2 << endl;
    }
    else
    cout<<"There are no square roots";
    system("pause");
    return 0;
}