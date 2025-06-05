#include <iostream>
using namespace std;

int main() 
{
    int rows;
    cout << "Enter the number of rows for the hollow triangle: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) 
    {
        for (int space = 1; space <= rows - i; space++) {
            cout << " ";
        }

        // Print stars and spaces inside the triangle
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == rows)
            {
                cout << "* "; 
            } 
            else 
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}
