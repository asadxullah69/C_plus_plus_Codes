#include<iostream>
using namespace std;
int main()
{
    char input;
    cout<<"Enter a alphabet: ";
    cin>>input;
    if ((input >='a'&& input <='z' ) || (input>='A' && input<='Z'))
    cout<<"It'a a alphabet";
    else
    cout<<"It's not a alphabet"<< endl;
    system("pause");
    return 0;


}