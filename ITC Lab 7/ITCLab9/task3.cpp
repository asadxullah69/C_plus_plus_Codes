#include <iostream>
using namespace std;

int main() 
{
    int rows = 4;
    int cols = 6;

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if ((i == 0 || i == 3) && j > 0 && j < 5) 
            {
                cout << "*";
            }
            else if ((i == 1 || i == 2) && (j == 0 || j == 5)) 
            {
                cout << "*";
            }
            else 
            {
                cout <<" ";
            }
        }
        cout << endl;
    }

    return 0;
}
