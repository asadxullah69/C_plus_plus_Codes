#include <iostream>
using namespace std;

int main() 
{
    char arr[100] = {'\0'};
    cout << "Enter a short sentence: ";
    cin.getline(arr, 100);
    int vowels=0,consonants=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        if(arr[i]=='a'||arr[i]=='A'||arr[i]=='e'||arr[i]=='E'||arr[i]=='i'||arr[i]=='I'||arr[i]=='o'||arr[i]=='O'||arr[i]=='u'||arr[i]=='U')
        vowels++;
        else if (arr[i]!=' ')
        consonants++;
    }
    cout<<"Vowels were "<<vowels<<" and consonants were "<<consonants<<endl;

    
}
