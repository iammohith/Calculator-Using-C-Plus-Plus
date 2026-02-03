// Copyright (c) 2026 Mohith. All rights reserved.
// Licensed under the MIT License. See LICENSE file in the project root for full license
// information.

#include "include/Calculator.hpp"

#include <iostream>
#include <limits>

#include "include/CalculatorExceptions.hpp"

/**
 * @brief Helper function to get a double from the user with validation.
 * @param prompt The prompt to display to the user.
 * @return The validated double.
 */
double getDoubleInput(const std::string &prompt) {
    double value;
    while (true) {
        std::cout << prompt;
        if (std::cin >> value) {
            return value;
        } else {
            std::cout << "Invalid input. Please enter a number." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

/**
 * @brief Helper function to get an operator from the user with validation.
 * @return The validated operator character.
 */
char getOperatorInput() {
    char op;
    while (true) {
        std::cout << "Enter operator (+, -, *, /): ";
        std::cin >> op;
        if (op == '+' || op == '-' || op == '*' || op == '/') {
            return op;
        } else {
            std::cout << "Invalid operator. Please try again." << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

int main() {
    calc::Calculator calc;

    std::cout << "--- Improved Calculator Application ---" << std::endl;

    try {
        char op = getOperatorInput();
        double num1 = getDoubleInput("Enter the first number: ");
        double num2 = getDoubleInput("Enter the second number: ");

        double result = 0.0;
        switch (op) {
            case '+':
                result = calc.add(num1, num2);
                break;
            case '-':
                result = calc.subtract(num1, num2);
                break;
            case '*':
                result = calc.multiply(num1, num2);
                break;
            case '/':
                result = calc.divide(num1, num2);
                break;
            default:
                throw calc::InvalidOperatorException(op);
        }

        std::cout << "\nResult: " << num1 << " " << op << " " << num2 << " = " << result
                  << std::endl;
    } catch (const calc::CalculatorException &e) {
        std::cerr << "\nCalculator Error: " << e.what() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "\nUnexpected Error: " << e.what() << std::endl;
    }

    return 0;
}
