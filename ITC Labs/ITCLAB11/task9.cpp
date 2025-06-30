#include<iostream>
using namespace std;

int main() {
    int arr[6];
    int arr2[6];

    // Input
    cout << "Enter 6 numbers: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 6; i++) 
    {
        if (i % 2 != 0) 
        {
            arr2[i]=arr[i]*arr[i];
        }
        else if(i%2==0)
        {
            arr2[i]=arr[i]/2;
        }
    }

    // Output
    cout << "Modified array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
