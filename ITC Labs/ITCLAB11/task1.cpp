#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int maxnum, minnum,indexmax,indexmin,secmax,secmin;
    int indexsecmax=0,indexsecmin=0;
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    maxnum = minnum = arr[0];
    indexmax = indexmin = 0;
    for(int i = 1; i < 5; i++)
    {
        if(arr[i] > maxnum)
        {
            maxnum = arr[i];
            indexmax=i;
        }
        if(arr[i] < minnum)
        {
            minnum = arr[i];
            indexmin=i;
        }
    

    }
    for(int i=0;i<5;i++)
    {
        if(arr[i]>secmax&&arr[i]<maxnum)
        {
            secmax=arr[i];
            indexsecmax=i;
        }
        if(arr[i]>minnum&&arr[i]<secmin)
        {
            secmin=arr[i];
            indexsecmin=i;
        }
    }

    cout << "The max number is " << maxnum <<" with index "<<indexmax<< " and the min is "<< minnum <<" with index "<<indexmin<<endl;
    cout << "The second max number is " << secmax <<" with index "<<indexsecmax<< " and the second min is "<< secmin <<" with index "<<indexsecmin;

}
