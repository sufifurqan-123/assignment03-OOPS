// Name: Furqan Ahmad Sofi
// Enrolment No: CSE-25-88
// Question: A3 - Factorial
// Date: 7-Oct-2026

#include <iostream>
using namespace std;

int main()
{
    int n;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0 || n > 20)
    {
        cout << "Invalid input! Enter a number between 0 and 20.";
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }

        cout << "Factorial of " << n << " = " << factorial;
    }

    return 0;
}