#include <iostream>
using namespace std;
int main()
{
    int i=1,input;
    cout<<"Enter a number: ";
    cin>>input;
    cout<<"Even numbers between "<<input<<" are: "<<endl;

    while (i<=input)
    {
        if (i%2==0)
        {
            cout<<i<<endl;
        }
        i++;
    }
    system("pause");
    return 0;
}
