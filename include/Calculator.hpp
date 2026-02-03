// Copyright (c) 2026 Mohith. All rights reserved.
// Licensed under the MIT License. See LICENSE file in the project root for full license
// information.

#ifndef CALCULATOR_HPP
#define CALCULATOR_HPP

namespace calc {

/**
 * @brief The Calculator class provides basic arithmetic operations.
 * It encapsulates operations like addition, subtraction, multiplication, and
 * division.
 */
class Calculator {
   public:
    /**
     * @brief Adds two numbers.
     * @param a First operand.
     * @param b Second operand.
     * @return Result of a + b.
     */
    double add(double a, double b) const;

    /**
     * @brief Subtracts the second number from the first.
     * @param a First operand.
     * @param b Second operand.
     * @return Result of a - b.
     */
    double subtract(double a, double b) const;

    /**
     * @brief Multiplies two numbers.
     * @param a First operand.
     * @param b Second operand.
     * @return Result of a * b.
     */
    double multiply(double a, double b) const;

    /**
     * @brief Divides the first number by the second.
     * @param a Dividend.
     * @param b Divisor.
     * @return Result of a / b.
     * @throws DivisionByZeroException if b is zero.
     */
    double divide(double a, double b) const;
};

}  // namespace calc

#endif  // CALCULATOR_HPP
