#include "../include/Calculator.hpp"
#include "../include/CalculatorExceptions.hpp"
#include <cassert>
#include <iostream>

/**
 * @brief Simple test suite for the Calculator class.
 */
void testAddition() {
  calc::Calculator calc;
  assert(calc.add(2.0, 3.0) == 5.0);
  assert(calc.add(-1.0, 1.0) == 0.0);
  assert(calc.add(0.0, 0.0) == 0.0);
  std::cout << "testAddition passed!" << std::endl;
}

void testSubtraction() {
  calc::Calculator calc;
  assert(calc.subtract(5.0, 2.0) == 3.0);
  assert(calc.subtract(0.0, 5.0) == -5.0);
  assert(calc.subtract(-1.0, -1.0) == 0.0);
  std::cout << "testSubtraction passed!" << std::endl;
}

void testMultiplication() {
  calc::Calculator calc;
  assert(calc.multiply(3.0, 4.0) == 12.0);
  assert(calc.multiply(0.0, 5.0) == 0.0);
  assert(calc.multiply(-2.0, 3.0) == -6.0);
  std::cout << "testMultiplication passed!" << std::endl;
}

void testDivision() {
  calc::Calculator calc;
  assert(calc.divide(10.0, 2.0) == 5.0);
  assert(calc.divide(7.0, 2.0) == 3.5);

  try {
    calc.divide(10.0, 0.0);
    assert(false); // Should not reach here
  } catch (const calc::DivisionByZeroException &e) {
    // Success
  }
  std::cout << "testDivision passed!" << std::endl;
}

int main() {
  std::cout << "Running Calculator Tests..." << std::endl;

  testAddition();
  testSubtraction();
  testMultiplication();
  testDivision();

  std::cout << "\nAll tests passed successfully!" << std::endl;

  return 0;
}
