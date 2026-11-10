// Name: Furqan Ahmad Sofi
// Enrolment No: cse-25-88
// Question: A1 - Multiplication Table
// Date: 07-10-2026

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}