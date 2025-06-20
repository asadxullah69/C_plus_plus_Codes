#include <iostream>
using namespace std;

int main() {
    const int SIZE = 12;
    int arr1[SIZE], arr2[SIZE];
    int min1, min2, max1, max2, min1Index, min2Index, max1Index, max2Index;

    cout << "Enter 12 numbers for the array:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr1[i];
    }

    //Find Minimum and its Index
    min1 = arr1[0];
    min1Index = 0;
    for (int i = 1; i < SIZE; i++) {
        if (arr1[i] < min1) {
            min1 = arr1[i];
            min1Index = i;
        }
    }
    cout << "Minimum element: " << min1 << ", Index: " << min1Index << endl;

    //Find Maximum and its Index
    max1 = arr1[0];
    max1Index = 0;
    for (int i = 1; i < SIZE; i++) {
        if (arr1[i] > max1) {
            max1 = arr1[i];
            max1Index = i;
        }
    }
    cout << "Maximum element: " << max1 << ", Index: " << max1Index << endl;

    //Find Min & 2nd Min with Indexes
    min1 = min2 = INT_MAX;
    for (int i = 0; i < SIZE; i++) {
        if (arr1[i] < min1) {
            min2 = min1;
            min2Index = min1Index;
            min1 = arr1[i];
            min1Index = i;
        } else if (arr1[i] < min2 && arr1[i] != min1) {
            min2 = arr1[i];
            min2Index = i;
        }
    }
    cout << "Min: " << min1 << " (Index " << min1Index << "), "
         << "2nd Min: " << min2 << " (Index " << min2Index << ")\n";

    //Find Max & 2nd Max with Indexes
    max1 = max2 = INT_MIN;
    for (int i = 0; i < SIZE; i++) {
        if (arr1[i] > max1) {
            max2 = max1;
            max2Index = max1Index;
            max1 = arr1[i];
            max1Index = i;
        } else if (arr1[i] > max2 && arr1[i] != max1) {
            max2 = arr1[i];
            max2Index = i;
        }
    }
    cout << "Max: " << max1 << " (Index " << max1Index << "), "
         << "2nd Max: " << max2 << " (Index " << max2Index << ")\n";

    //One-step Right Rotation
    int temp = arr1[SIZE - 1];
    for (int i = SIZE - 1; i > 0; i--) {
        arr1[i] = arr1[i - 1];
    }
    arr1[0] = temp;
    cout << "Array after one right rotation:\n";
    for (int i = 0; i < SIZE; i++) cout << arr1[i] << " ";
    cout << endl;

    //One-step Left Rotation
    temp = arr1[0];
    for (int i = 0; i < SIZE - 1; i++) {
        arr1[i] = arr1[i + 1];
    }
    arr1[SIZE - 1] = temp;
    cout << "Array after one left rotation:\n";
    for (int i = 0; i < SIZE; i++) cout << arr1[i] << " ";
    cout << endl;

    //Reverse Copy into arr2
    cout << "Array1: ";
    for (int i = 0; i < SIZE; i++) cout << arr1[i] << "\t";
    cout << endl;

    for (int i = 0; i < SIZE; i++) {
        arr2[i] = arr1[SIZE - 1 - i];
    }
    cout << "Array2 (reversed copy): ";
    for (int i = 0; i < SIZE; i++) cout << arr2[i] << "\t";
    cout << endl;

    //Copy Half Forward, Half Reverse
    for (int i = 0; i < SIZE / 2; i++) {
        arr2[i] = arr1[i]; // first half forward
        arr2[SIZE - 1 - i] = arr1[i + SIZE / 2]; // second half reverse
    }
    cout << "Array2 (half forward, half reverse): ";
    for (int i = 0; i < SIZE; i++) cout << arr2[i] << "\t";
    cout << endl;

    //Reverse Same Array
    for (int i = 0; i < SIZE; i++) {
        arr2[i] = arr1[SIZE - 1 - i];
    }
    cout << "Reversed array1 (stored in arr2): ";
    for (int i = 0; i < SIZE; i++) cout << arr2[i] << "\t";
    cout << endl;

    //Palindrome Check
    bool isPalindrome = true;
    for (int i = 0; i < SIZE / 2; i++) {
        if (arr1[i] != arr1[SIZE - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    cout << "Array is " << (isPalindrome ? "a palindrome." : "not a palindrome.") << endl;

    //Compare Two Arrays
    int win1 = 0, win2 = 0, same = 0;
    cout << "Enter 12 numbers for array two:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < SIZE; i++) {
        if (arr1[i] > arr2[i]) win1++;
        else if (arr1[i] < arr2[i]) win2++;
        else same++;
    }
    cout << "Winner in array one: " << win1 << endl;
    cout << "Winner in array two: " << win2 << endl;
    cout << "Same both: " << same << endl;

    return 0;
}