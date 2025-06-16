<<<<<<< HEAD
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) 
    {
        isPrime = false;
    } 
    else 
    {
        for (int i = 2; i <= sqrt(num); i++) 
        {
            if (num % i == 0) 
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "It's a prime number";
    else
        cout << "It's not a prime number";

    return 0;
}
=======
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int num;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) 
    {
        isPrime = false;
    } 
    else 
    {
        for (int i = 2; i <= sqrt(num); i++) 
        {
            if (num % i == 0) 
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "It's a prime number";
    else
        cout << "It's not a prime number";

    return 0;
}
>>>>>>> 1286bd8dff09d8f2242b321f7be62acf6db9d305
