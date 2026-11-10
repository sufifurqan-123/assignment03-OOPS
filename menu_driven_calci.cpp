// Name: Furqan Ahmad Sofi
// Enrolment No: CSE-25-88
// Question: C2 - Menu-Driven Calculator
// Date: 7-Oct-2026

#include <iostream>
using namespace std;

int main()
{
    int choice;
    double a, b;

    do
    {
        cout << "\n----- CALCULATOR MENU -----" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a + b << endl;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a - b << endl;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a * b << endl;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;

                if (b != 0)
                    cout << "Result = " << a / b << endl;
                else
                    cout << "Error! Division by zero is not allowed." << endl;

                break;

            case 5:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 5);

    return 0;
}