#include<iostream>
using namespace std;
int main()
{
   char input;
   cout<<"Enter a alphabet: ";
   cin>>input;
   switch (input) 
   {
   case 'a':
   case 'A':
    {
        cout<<"It's a vowel"<<endl;
        break;
    }
   case 'e':
   case 'E':
    {
        cout<<"It's a vowel"<<endl;
        break;

    }
    case 'i':
    case 'I':
    {
        cout<<"It's a vowel"<<endl;
        break;

    }
    case 'o':
    case 'O':
    {
        cout<<"It's a vowel"<<endl;
        break;
    }
    case 'u':
    case 'U':
    {
        cout<<"It's a vowel"<<endl;
        break;
    }
    default:
    {
        cout<<"It's a consonant"<<endl;
        break;
    }
    }
    system("pause");
    return 0;
}