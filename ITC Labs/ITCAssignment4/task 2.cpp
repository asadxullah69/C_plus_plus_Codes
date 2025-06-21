#include <iostream>
using namespace std;

int main() {
    // Declare an array to store quantities of the 5 items
    int stock[5];
    string items[5] = { "Bread", "Milk", "Eggs", "Rice", "Flour" };

    // Input current stock for each item
    for (int i = 0; i < 5; i++) {
        cout << "Enter quantity of " << items[i] << ": ";
        cin >> stock[i];
    }

    // Check and restock items that are below 5
    for (int i = 0; i < 5; i++) {
        if (stock[i] < 5) {
            cout << items[i] << " is running low (current stock: " << stock[i] << "). Restocking to 20.\n";
            stock[i] = 20; // Restock the item to 20
        }
    }

    // Display the updated stock
    cout << "\nUpdated stock after restocking:\n";
    for (int i = 0; i < 5; i++) {
        cout << items[i] << ": " << stock[i] << endl;
    }

    return 0;
}
