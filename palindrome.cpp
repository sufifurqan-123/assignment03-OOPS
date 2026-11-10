// Name: Furqan Ahmad Sofi
// Enrolment No: CSE-25-88
// Question: B3 - Palindrome Number
// Date: 7-Oct-2026

#include <iostream>
using namespace std;

int main()
{
    int n, original, digit, reverse = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }

    return 0;
}