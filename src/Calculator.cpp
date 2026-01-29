#include "../include/Calculator.hpp"
#include "../include/CalculatorExceptions.hpp"

namespace calc {

double Calculator::add(double a, double b) const { return a + b; }

double Calculator::subtract(double a, double b) const { return a - b; }

double Calculator::multiply(double a, double b) const { return a * b; }

double Calculator::divide(double a, double b) const {
  if (b == 0.0) {
    throw DivisionByZeroException();
  }
  return a / b;
}

} // namespace calc
