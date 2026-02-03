// Copyright (c) 2026 Mohith. All rights reserved.
// Licensed under the MIT License. See LICENSE file in the project root for full license
// information.

#ifndef CALCULATOR_EXCEPTIONS_HPP
#define CALCULATOR_EXCEPTIONS_HPP

#include <stdexcept>
#include <string>

namespace calc {

/**
 * @brief Base exception class for Calculator related errors.
 */
class CalculatorException : public std::runtime_error {
   public:
    explicit CalculatorException(const std::string &message) : std::runtime_error(message) {}
};

/**
 * @brief Exception thrown when division by zero is attempted.
 */
class DivisionByZeroException : public CalculatorException {
   public:
    DivisionByZeroException() : CalculatorException("Division by zero is not allowed.") {}
};

/**
 * @brief Exception thrown when an invalid operator is provided.
 */
class InvalidOperatorException : public CalculatorException {
   public:
    explicit InvalidOperatorException(char op)
        : CalculatorException(std::string("Invalid operator: ") + op) {}
};

}  // namespace calc

#endif  // CALCULATOR_EXCEPTIONS_HPP
