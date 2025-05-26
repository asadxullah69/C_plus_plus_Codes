#include<iostream>
using namespace std;
int main()
{
    string num;
    cout<<"Enter a number max six digits: ";
    cin>>num;
    int length = num.length();
    if (length>6)
    {
        cout<<"Error Input exceeds six digits"<<endl;
        system("pause");
        return 1;
    }
    for (int i=0; i<length;i++)
    {
        if (num[i]=='1') cout<<"one ";
        else if (num[i]=='2') cout<<"two ";
        else if (num[i]=='3') cout<<"three ";
        else if (num[i]=='4') cout<<"four ";
        else if (num[i]=='5') cout<<"five ";
        else if (num[i]=='6') cout<<"six ";
        else if (num[i]=='7') cout<<"seven ";
        else if (num[i]=='8') cout<<"eight ";
        else if (num[i]=='9') cout<<"nine ";
        else if (num[i]=='0') cout<<"zero ";
        else
        {
            cout<<"Error Input contains non-digit characters"<<endl;
            system("pause");
            return 1;
        }
    }
    system("pause");
    return 0;
    
}