#include <iostream>
using namespace std;

int main() {
    char arr[100] = {'\0'};
    cout << "Enter a short sentence: ";
    cin.getline(arr, 100);

    int currentLen = 0, maxLen = 0;
    int currentStart = 0, maxStart = 0;

    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] != ' ') {
            if (currentLen == 0) {
                currentStart = i;  // mark the beginning of a new word
            }
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStart = currentStart;
            }
            currentLen = 0;  // reset for next word
        }
    }
    if (currentLen > maxLen) 
    {
        maxLen = currentLen;
        maxStart = currentStart;
    }
    cout << "The length of the longest word is: " << maxLen << endl;
    cout << "The longest word is: ";
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        cout << arr[i];
    }
    cout << endl;

    return 0;
}