// Name: Furqan Ahmad Sofi
// Enrolment No: CSE-25-88
// Question: B5 - GCD and LCM
// Date: 7-Oct-2026

#include <iostream>
using namespace std;

int main()
{
    int a, b, originalA, originalB;
    int r;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    originalA = a;
    originalB = b;

    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }

    int gcd = a;
    int lcm = (originalA * originalB) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}