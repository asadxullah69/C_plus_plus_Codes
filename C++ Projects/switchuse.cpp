#include<iostream>
using namespace std;
int main()
{
    int input;
    cout<<"Enter a value between 1 and 4: ";
    cin>>input;
    switch(input)
    {
        case 1:
            cout<<"You are idiot"<<endl;
            break;
        case 2:
            cout<<"You will get fucked"<<endl;
            break;
        case 3:
            cout<<"Nothing to print"<<endl;
            break;
        case 4:
            cout<<"Hmm, good choice"<<endl;
            break;
        default:
            cout<<"You entered invalid value"<<endl;
        

    }
   system("pause");
    return 0;
}