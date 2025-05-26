#include<iostream>
using namespace std;
int main()
{
    int Fuel,Rent,Bills,Total;
    cout<<"Enter the amount of Fuel: ";
    cin>>Fuel;
    cout<<"Enter the amount of Rent: ";
    cin>>Rent;
    cout<<"Enter the amount of Bills: ";
    cin>>Bills;
    Total=Fuel+Rent+Bills;
    cout<<"================================================"<<endl;
    cout<<'\n'<<"FUEL:"<<"\t\t"<<Fuel<<'\n'<<endl;
    cout<<"RENT:"<<"\t\t"<<Rent<<'\n'<<endl;
    cout<<"BILLS:"<<"\t\t"<<Bills<<'\n'<<endl;
    cout<<"TOTAL:"<<"\t\t"<<Total<<'\n'<<endl;
    cout<<"================================================"<<endl;
    system("pause");
    return 0;
}
