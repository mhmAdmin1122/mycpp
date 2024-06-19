#include <iostream>
using namespace std;

int main()
{
    char operation;
    float num1, num2;

    // Display a welcome message
    cout << "Welcome to the basic calculator!" << endl;

    // Ask the user to enter the operation
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    // Ask the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform the operation and display the result
    switch (operation)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Error! Division by zero." << endl;
        break;
    default:
        cout << "Error! The operator is not correct" << endl;
        break;
    }

    return 0;
}
