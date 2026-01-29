# Enterprise-Level Calculator (C++)

## About
This is a production-ready, modular calculator application implemented in C++. It follows industry standards for clean architecture, robust error handling, and maintainable project structure.

## Features
- **Modular Design**: Separated concerns into a core library and a CLI front-end.
- **Robust Error Handling**: Custom exception hierarchy within a dedicated namespace (`calc`).
- **High Precision**: Uses `double` precision for all arithmetic operations.
- **Input Validation**: Guaranteed safe execution through rigorous input sanitization.
- **Unit Tested**: Comprehensive test suite covering success paths and edge cases.
- **Professional Build System**: Managed via CMake for cross-platform compatibility.

## Project Structure
```text
.
├── CMakeLists.txt              # Project build configuration
├── calculator.cpp              # Application entry point (CLI)
├── include/
│   ├── Calculator.hpp          # Library interface
│   └── CalculatorExceptions.hpp # Custom exception definitions
├── src/
│   └── Calculator.cpp          # Library implementation
└── tests/
    └── tests.cpp               # Automated unit tests
```

## Getting Started

### Prerequisites
- C++17 compatible compiler (GCC 7+, Clang 5+, or MSVC 2017+)
- [CMake](https://cmake.org/download/) 3.10 or higher

### Build and Install
1. **Create Build Directory**:
   ```bash
   mkdir build && cd build
   ```
2. **Configure and Build**:
   ```bash
   cmake ..
   make
   ```
3. **Run Application**:
   ```bash
   ./calculator_app
   ```
4. **Run Tests**:
   ```bash
   ./calculator_tests
   ```

## Design Philosophy
This project demonstrates the **Single Responsibility Principle** by decoupling mathematical logic from user interaction. It utilizes modern C++ namespaces to ensure easy integration into larger enterprise ecosystems without symbol conflicts.

## Quality Assurance
The codebase is verified through a dedicated test suite. You can find the test cases in the `tests/` directory, which use standard assertions to validate arithmetic correctness and exception safety.

