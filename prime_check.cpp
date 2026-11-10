// Name: Furqan Ahmad Sofi
// Enrolment No: CSE-25-88
// Question: A5 - Prime Number Check
// Date: 7-Oct-2026

#include <iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = true;

    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        cout << n << " is prime.";
    }
    else
    {
        cout << n << " is not prime.";
    }

    return 0;
}