#include<iostream>
using namespace std;
int main()
{
    char arr[20]={'\0'};
    cout<<"Enter the number plate: ";
    cin.getline(arr,20);
    int upper=0,lower=0,digits=0,space=0,symbols=0;
    for(int i =0;arr[i]!='\0';i++)
    {
       if(arr[i]>='A'&&arr[i]<='Z')
       {
            upper++;
       }
       else if(arr[i]>='0' &&arr[i]<='9')
       {
            digits++;
       }
       else if(arr[i]>='a' &&arr[i]<='z')
       {
            lower++;
       }
       else if(arr[i]==' ')
       {
            space++;
       }
       else if(arr[i]=='-')
       {
            symbols++;
       }
    }
    cout<<"total number of Upper case alphabets is "<<upper<<endl;
    cout<<"total number of lower case alphabets is "<<lower<<endl;
    cout<<"total number of symbols is "<<symbols<<endl;
    cout<<"total number of spaces is "<<space<<endl;
    cout<<"total number of digits is "<<digits<<endl;

}