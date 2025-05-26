#include<iostream>
using namespace std;
int main()
{
    int numofchoco,weight;
    char choice;
    cout<<"Enter the number of chocolates being sold: ";
    cin>>numofchoco;
    cout<<"Choose your measuring unit from Ounces(o),grams(g),pounds(p),kilogram(k): ";
    cin>>choice;
    cout<<"Enter the weight of each chocolate in ounces: ";
    cin>>weight;
    if (choice =='o')
    cout<<"The total weight of "<<numofchoco<<" chocolate is "<<numofchoco*weight<<" ounces."<<endl;
    else if (choice =='g')
    cout<<"The total weight of "<<numofchoco<<" chocolate is "<<numofchoco*weight/28.349<<" grams."<<endl;
    else if (choice =='k')
    cout<<"The total weight of "<<numofchoco<<" chocolate is "<<numofchoco*weight*28.349/1000<<" kilogram."<<endl;
    else if (choice =='p')
    cout<<"The total weight of "<<numofchoco<<" chocolate is "<<numofchoco*weight*16<<" pounds."<<endl;
    else
    cout<<"Invalid choice. Please enter a valid measuring unit."<<endl;

    system("pause");
    return 0;
}