#include <iostream>
using namespace std;
int main()
{
    int st1,st2,st3,st4,st5,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20,c21,c22,c23,c24,c25;
    cout<<"Enter roll number of first student and then numbers: ";
    cin>>st1>>c1>>c2>>c3>>c4>>c5;
    cout<<"Enter roll number of second student and then numbers: ";
    cin>>st2>>c6>>c7>>c8>>c9>>c10;
    cout<<"Enter roll number of third student and then numbers: ";
    cin>>st3>>c11>>c12>>c13>>c14>>c15;
    cout<<"Enter roll number of fourth student and then numbers: ";
    cin>>st4>>c16>>c17>>c18>>c19>>c20;
    cout<<"Enter roll number of fifth student and then numbers: ";
    cin>>st5>>c21>>c22>>c23>>c24>>c25;
    int t1,t2,t3,t4,t5;
    t1= c1+c2+c3+c4+c5;
    t2= c6+c7+c8+c9+c10;
    t3= c11+c12+c13+c14+c15;
    t4= c16+c17+c18+c19+c20;
    t5= c21+c22+c23+c24+c25;
    if (t1>t2 && t1>t3 && t1>t4 && t1>t5)
    {
        cout<<"Student "<<st1<<" has the highest total marks: "<<t1<<endl;
    }
    else if (t2>t1 && t2>t3 && t2>t4 && t2>t5)
    {
        cout<<"Student "<<st2<<" has the highest total marks: "<<t2<<endl;
    }
    else if (t3>t1 && t3>t2 && t3>t4 && t3>t5)
    {
        cout<<"Student "<<st3<<" has the highest total marks: "<<t3<<endl;
    }
    else if (t4>t1 && t4>t2 && t4>t3 && t4>t5)
    {
        cout<<"Student "<<st4<<" has the highest total marks: "<<t4<<endl;
    }
    else
    {
        cout<<"Student "<<st5<<" has the highest total marks: "<<t5<<endl;
    }
}