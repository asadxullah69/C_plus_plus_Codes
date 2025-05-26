#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    char c;
    cout << "What operation do you want to perform (-,+,*,/): "; //Let user choose what operation to perform
    cin >> c;
    cout << "Enter first number: ";
    cin >> b;
    cout << "Enter second number: ";
    cin >> a;
    if (c == '+')
    {
        cout << "You have selected addition" << endl;
    }
    else if (c == '-')
    {
        cout << "You have selected subtraction" << endl;
    }
    else if (c == '*')
    {
        cout << "You have selected multiplication" << endl;
    }
    else if (c == '/')
    {
        cout << "You have selected division" << endl;
    }
    else if (c == '%')
    {
        cout << "You have selected modulus" << endl;
    }
    else
    {
        cout << "You entered invalid operator" << endl;
        cout << "Please enter a valid operator" << endl;
        system("pause"); // Pause the program to allow the user to read the message
        quick_exit(0); // Exit the program if an invalid operator is entered
    } 
    // Perform the operation based on the user's choice
     int result = 0; // Initialize result variable
     if (c == '+') 
     {
         result = a + b; // Addition
     } 
     else if (c == '-') 
     {
         result = a - b; // Subtraction
     } 
     else if (c == '*') 
     {
         result = a * b; // Multiplication
     } 
     else if (c == '/') 
     {
         result = a / b; // Division
     } 
     else if (c == '%') 
     {
         result = a % b; // Modulus
     }
    cout << "The result of " << a << " and " << b << " is: " << result << endl;
    system("pause");
    return 0;

}