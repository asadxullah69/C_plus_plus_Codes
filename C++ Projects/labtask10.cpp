#include<iostream>
using namespace std;
int main()
{
    int weight,height;
    float BMI;
    cout<<"Enter your weight in kg: ";
    cin>>weight;
    cout<<"Enter your height in cm: ";
    cin>>height;
    height=height/100;
    BMI=weight/(height*height);
    if (BMI<18.5)
        cout<<"Your BMI is "<<BMI<<". You are underweight."<<endl;
    else if (BMI>=18.5 && BMI<24.9)
        cout<<"Your BMI is "<<BMI<<". You are normal weight."<<endl;
    else if (BMI>=25 && BMI<29.9)
        cout<<"Your BMI is "<<BMI<<". You are overweight."<<endl;
    else
        cout<<"Your BMI is "<<BMI<<". You are obese."<<endl;
    system("pause");
    return 0;
}