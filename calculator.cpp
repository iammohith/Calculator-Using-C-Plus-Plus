#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    // Declare variables for two numbers and the operator
    float num1, num2; 
    char op;  // Operator: +, -, *, /

    // Prompt the user to input an operator
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    // Prompt the user to input the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Prompt the user to input the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Switch case to perform the appropriate arithmetic operation based on the input operator
    switch (op)
    {
        // Addition
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        
        // Subtraction
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;

        // Multiplication
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;

        // Division
        case '/':
            // Check for division by zero before performing the operation
            if (num2 != 0)
            {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            else
            {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;

        // Handle incorrect operator input
        default:
            cout << "Error! Operator is not correct." << endl;
            break;    
    }

    return 0;
}
