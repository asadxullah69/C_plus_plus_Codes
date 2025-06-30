#include<iostream>
using namespace std;

int main() {
    int arr[6];

    // Input
    cout << "Enter 6 numbers: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    // Process in pairs
    for (int i = 0; i < 6; i += 2) {
        int a = arr[i];
        int b = arr[i + 1];
        int result = 0;

        if (a % 2 == 0 && b % 2 == 0) {
            result = (a + b) / 2;
        }
        else if (a % 2 != 0 && b % 2 != 0) {
            result = (a * a) + b;
        }
        else if (a % 2 == 0 && b % 2 != 0) {
            result = a + b;
        }
        else if (a % 2 != 0 && b % 2 == 0) {
            result = a * b;
        }

        arr[i] = arr[i + 1] = result;
    }

    // Output
    cout << "Modified array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}