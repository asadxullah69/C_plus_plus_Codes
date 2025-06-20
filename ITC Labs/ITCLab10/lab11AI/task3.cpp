#include <iostream>
using namespace std;

int main() {
    //Task 1: Merge two arrays
    int a1[10], a2[8], a3[18];

    cout << "Enter 10 numbers for array one:\n";
    for (int i = 0; i < 10; i++) cin >> a1[i];

    cout << "Enter 8 numbers for array two:\n";
    for (int i = 0; i < 8; i++) cin >> a2[i];

    // Merge arrays into a3
    for (int i = 0; i < 10; i++) a3[i] = a1[i];
    for (int i = 0; i < 8; i++) a3[10 + i] = a2[i];

    cout << "\nElements in array three are:\n";
    for (int i = 0; i < 18; i++) cout << a3[i] << "\t";
    cout << "\n\n";

    //Task 2: Check if array has any duplicate
    int arr[15];
    bool hasDuplicate = false;

    cout << "Enter 15 numbers for duplicate check:\n";
    for (int i = 0; i < 15; i++) cin >> arr[i];

    for (int i = 0; i < 15; i++) {
        for (int j = i + 1; j < 15; j++) {
            if (arr[i] == arr[j]) {
                hasDuplicate = true;
                break;
            }
        }
        if (hasDuplicate) break;
    }

    if (hasDuplicate)
        cout << "Array has duplicate values.\n";
    else
        cout << "Array has all unique values.\n";

    //Task 3: Count how many values are duplicated
    int duplicateCount = 0;
    for (int i = 0; i < 15; i++) {
        bool alreadyChecked = false;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyChecked = true;
                break;
            }
        }

        if (alreadyChecked) continue;

        int count = 0;
        for (int j = i + 1; j < 15; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 0) duplicateCount++;
    }

    if (duplicateCount > 0)
        cout << "Array has " << duplicateCount << " duplicate values.\n";
    else
        cout << "Array has all unique values.\n";

    //Task 4: Print how many times each duplicate occurred
    for (int i = 0; i < 15; i++) {
        bool alreadyChecked = false;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyChecked = true;
                break;
            }
        }

        if (alreadyChecked) continue;

        int count = 0;
        for (int j = i + 1; j < 15; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 0) {
            cout << arr[i] << " has " << count << " duplicate(s)\n";
        }
    }

    return 0;
}