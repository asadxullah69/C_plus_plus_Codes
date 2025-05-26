#include<iostream>
using namespace std;
int main()
{
    cout << "Choose a option to print a shape (From 1 to 4): "; // Prompt the user to choose a shape
    int choice; // Variable to store the user's choice
    cin >> choice; // Read the user's choice from input
    if (choice ==1)       
    {
        cout << "You have chosen option 1" << endl;
        cout << "*********" << endl;
        cout << "*       *" << endl;
        cout << "*       *" << endl;
        cout << "*********" << endl;
    }
    else if (choice == 2)
    {
        cout << "You have chosen option 2" << endl;
        cout <<"      "<< "*" << endl << "    " << "*" << "   " << "*" << endl;
        cout << "   " << "*" << "     " << "*" << endl;
        cout << "    " << "*" << "   " << "*" << endl;
        cout << "      " << "*" << endl;

    }
    else if (choice == 3)
    {
        cout << "You have chosen option 3" << endl;
        cout << "***********" << endl;
        cout << "*         *" << endl;
        cout << "*         *" << endl;
        cout << "***********" << endl;
    }
    else if (choice == 4)
    {
        cout << "You have chosen option 4" << endl;
        cout << "A" << endl;
    }
    else
    {
        cout<< "Invalid choice. Please choose a number between 1 and 4."<<endl; 
    }
    system("pause");
    return 0;
}