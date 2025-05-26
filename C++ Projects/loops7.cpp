#include <iostream>
using namespace std;
int main()
{
    int fac=1,i=1,n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n<0)
    cout<<"Factorail can not be defined for negative values"<<endl;
    else
    {
        do
        {
            fac = fac*i;
            i++;
        }
        while(i<=n);
        
        cout<<"The factorial of "<<n<<" is "<<fac<<endl;
 
    }

    system("pause");
    return 0;
}