#include<iostream>
using namespace std;
int main()
{
    int Chemistry,Math,Physics;
    cout<<"Enter Chemistry Marks: ";
    cin>>Chemistry;
    cout<<"Enter Math Marks: ";
    cin>>Math;
    cout<<"Enter Physics Marks: ";
    cin>>Physics;
    int Total=Chemistry+Math+Physics;
    cout<<'\n'<<"=================================================================="<<endl;
    cout<<"Chemistry             Math             Physics          Total"<<endl;
    cout<<"    "<<Chemistry<<"                 "<<Math<<"                "<<Physics<<"              "<<Total<<endl;
    cout<<"\n"<<"=================================================================="<<endl;
    system("pause");
    return 0;
}