#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int SIZE = 12;
    int arr1[SIZE], arr2[SIZE], arr3[SIZE];

    cout << "Enter 12 numbers for array one:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr1[i];
    }

    //Problem 1: Rule on Element Pairs
    for (int i = 0; i < SIZE; i += 2) {
        int a = arr1[i], b = arr1[i + 1];
        if (a % 2 == 0 && b % 2 == 0) {
            arr1[i] = arr1[i + 1] = (a + b) / 2;
        } else if (a % 2 != 0 && b % 2 != 0) {
            arr1[i] = arr1[i + 1] = (a * a) + b;
        } else if (a % 2 == 0 && b % 2 != 0) {
            arr1[i] = arr1[i + 1] = a + b;
        } else if (a % 2 != 0 && b % 2 == 0) {
            arr1[i] = arr1[i + 1] = a * b;
        }
    }

    cout << "\nArray elements after applying pair rules:\n";
    for (int i = 0; i < SIZE; i++) cout << arr1[i] << "\t";
    cout << endl;

    //Problem 2: Index-based square or half
    cout << "\nApplying index-based rules (square if odd index, half if even):\n";
    cout << "Enter 12 numbers again for array one:\n";
    for (int i = 0; i < SIZE; i++) cin >> arr1[i];

    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 0)
            arr2[i] = arr1[i] / 2;
        else
            arr2[i] = arr1[i] * arr1[i];
    }

    cout << "Elements in array two:\n";
    for (int i = 0; i < SIZE; i++) cout << arr2[i] << "\t";
    cout << endl;

    //Problem 3: Index + value-based transformation
    cout << "\nApplying index + value based transformation:\n";
    cout << "Enter 12 numbers again for array one:\n";
    for (int i = 0; i < SIZE; i++) cin >> arr1[i];

    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 1) {  // odd index
            if (arr1[i] % 2 == 0) arr2[i] = arr1[i]; // even value, no change
            else arr2[i] = pow(arr1[i], 3);          // odd value, cube
        } else {           // even index
            if (arr1[i] % 2 == 0) arr2[i] = arr1[i] / 2;
            else arr2[i] = (arr1[i] / 2) + 1;
        }
    }

    cout << "Elements in array two:\n";
    for (int i = 0; i < SIZE; i++) cout << arr2[i] << "\t";
    cout << endl;

    //Problem 4: Split even/odd values to separate arrays
    cout << "\nSplitting even and odd elements into separate arrays:\n";
    cout << "Enter 12 numbers again for array one:\n";
    for (int i = 0; i < SIZE; i++) cin >> arr1[i];

    for (int i = 0; i < SIZE; i++) {
        arr2[i] = arr3[i] = 0;
        if (arr1[i] % 2 == 0) arr2[i] = arr1[i]; // even
        else arr3[i] = arr1[i];                 // odd
    }

    cout << "Even elements in array two:\n";
    for (int i = 0; i < SIZE; i++) cout << arr2[i] << "\t";
    cout << "\nOdd elements in array three:\n";
    for (int i = 0; i < SIZE; i++) cout << arr3[i] << "\t";
    cout << endl;

    return 0;
}
