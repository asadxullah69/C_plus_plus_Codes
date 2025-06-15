#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string num1,num2;
    char oper;
    int sum=0,diff=0,mul=0,div=0,mod=0,pow;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the operation (+,-,*,/,%, or power(p)): ";
    cin>>oper;
    int list[15]={};
    int list2[15]={};
    for(int i=0;i<15;i++)
    {
        list[i]=num1[i]-'0';
        list2[i]=num2[i]-'0';
    }
    if (oper=='+')
    {
        int add[15]={};
        int carry=0;
        cout<<"Sum is: ";
        for(int i=14;i>=0;i--)
        {
            sum = list[i]+list2[i]+carry;
            add[i]=sum%10;
            carry=sum/10;
    
        }
        for(int i=0;i<15;i++)
        {
            cout<<add[i];
        }
    }
    else if (oper=='-')
    {
        int sub[15]={};
        int borrow=0;
        cout<<"Subtraction is: ";
        bool isnegative=false;
        for(int i=0;i<15;i++) 
        {
            if (list[i]<list2[i])
            {
                isnegative=true;
                break;

            }
            else if(list[i]>list2[i])
            {
                break;
            }
        for(int i=0;i<15;i++)
        {
            if(isnegative)
            {
                swap(list[i],list2[i]);
            }
        }

        }
        for(int i=14;i>=0;i--)
        {
            diff = list[i]-list2[i]-borrow;
            if(diff<0)
            {
                diff = diff+10;
                borrow =1;
            }
            else
            {
                borrow =0;
            }
            
            sub[i]=diff;
        }
        if(isnegative)
            {
                cout<<"-";
            }
        for(int i=0;i<15;i++)
        {
            cout<<sub[i];
        }
    
    }
    else if(oper=='*')
    {
        int result[30] = {0};
        cout << "Product is: ";

    
        for (int i = 14; i >= 0; i--) 
        {
            for (int j = 14; j >= 0; j--) 
            {
                int pos = i + j + 1;
                int mul = list[i] * list2[j];
                result[pos] += mul;
                result[pos - 1] += result[pos] / 10;
                result[pos] %= 10;

            }
            cout << result[i];

        }

    }
    else if (oper == '%')
    {
        int temp[15] = {0};

        for (int i = 0; i < 15; i++)
        {
            temp[i] = list[i];
        }

        while (true)
        {
            bool greater = false;
            for (int i = 0; i < 15; i++)
            {
                if (temp[i] > list2[i])
                {
                    greater = true;
                    break;
                }
                else if (temp[i] < list2[i])
                {
                    greater = false;
                    break;
                }
            }

            if (!greater && !equal(temp, list2, 15))
            {
                break;
            }

            int borrow = 0;
            cout << "Remainder is: ";
        
            for (int i = 14; i >= 0; i--)
            {
                int diff = temp[i] - list2[i] - borrow;
                if (diff < 0)
                {
                    diff += 10;
                    borrow = 1;
                }
                else
                {
                    borrow = 0;
                }
                temp[i] = diff;
                cout <<temp[i];
        
            }

        }   
    }

    else if (oper == 'p')
    {
        int result[30] = {0};
        result[29] = 1;
        int exp = 0;

        for (int i = 0; i < 15; i++)
        {
            exp = exp * 10 + list2[i];
        }

        for (int e = 0; e < exp; e++)
        {
            int temp[30] = {0};
            for (int i = 14; i >= 0; i--)
            {
                for (int j = 29; j >= 0; j--)
                {
                    int pos = i + j + 1;
                    int mul = list[i] * result[j];
                    temp[pos] += mul;
                    temp[pos - 1] += temp[pos] / 10;
                    temp[pos] %= 10;
                }
            }
            cout<<"Power is: ";
            for (int i = 0; i < 30; i++)
            {
                result[i] = temp[i];
                cout<<result[i];

            }
        }
    }



    return 0;
}