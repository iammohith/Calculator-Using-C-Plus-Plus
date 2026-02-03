# Contributing to Calculator

Thank you for your interest in contributing to the Enterprise-Level Calculator project! We welcome contributions from the community.

## Code of Conduct
Please be respectful and professional in all interactions.

## How to Contribute

1. **Fork the Repository**: click the "Fork" button on the top right.
2. **Clone your Fork**:
   ```bash
   git clone https://github.com/YOUR_USERNAME/Calculator-Using-C-Plus-Plus.git
   ```
3. **Create a Branch**:
   ```bash
   git checkout -b feature/your-feature-name
   ```
4. **Make Changes**:
   - Follow the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html).
   - Ensure your code is formatted: `clang-format -i src/*.cpp include/*.hpp`.
5. **Run Tests**:
   - Ensure all tests pass: `ctest --output-on-failure` in the build directory.
   - Add new tests for any new functionality.
6. **Commit and Push**:
   ```bash
   git commit -m "Description of your changes"
   git push origin feature/your-feature-name
   ```
7. **Submit a Pull Request**: Go to the original repository and click "New Pull Request".

## Reporting Bugs
Please open an issue on GitHub with:
- Steps to reproduce
- Expected behavior
- Actual behavior
