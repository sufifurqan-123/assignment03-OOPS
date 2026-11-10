// Name: Furqan Ahmad Sofi
// Enrolment No: CSE-25-88
// Question: C1 - Input Validation
// Date: 7-Oct-2026

#include <iostream>
using namespace std;

int main()
{
    int marks;

    do
    {
        cout << "Enter marks (0-100): ";
        cin >> marks;

        if (marks < 0 || marks > 100)
        {
            cout << "Invalid! Please enter valid marks." << endl;
        }

    } while (marks < 0 || marks > 100);

    cout << "Accepted: " << marks << endl;

    return 0;
}