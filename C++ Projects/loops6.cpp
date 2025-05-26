#include <iostream>
using namespace std;
int main()
{
    int i,rows; //number of rows is equal to the number user puts and wants to go till
    cout<<"Enter the number you want to go till: ";
    cin>>rows;
    for(i=1;i<=rows;i++) //this loop is limiting the number of times the inner loop will run
    {
        for(int j=1;j<=i;j++) //this loops starts fresh everytime after outer loop runs
        {
            cout<<j;    //prints value of j which changes gradually due to increment
        }
        cout<<endl;    //creates new line after inner loop stops. it's a part of outer loop
    }   
    system("pause");
    return 0;

}