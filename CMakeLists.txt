cmake_minimum_required(VERSION 3.10)
project(CalculatorApp VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(include)

# Library for calculator logic
add_library(CalculatorLib src/Calculator.cpp)

# Main Application executable
add_executable(calculator_app calculator.cpp)
target_link_libraries(calculator_app CalculatorLib)

# Unit Tests
enable_testing()
add_executable(calculator_tests tests/tests.cpp)
target_link_libraries(calculator_tests CalculatorLib)
add_test(NAME CalculatorUnitTests COMMAND calculator_tests)
