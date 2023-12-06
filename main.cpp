// main.cpp

#include <iostream>
#include "math_functions.cpp"

int main() {
    // Use functions from math_functions.cpp
    int result1 = add(5, 7);
    int result2 = multiply(3, 4);

    // Display the results
    std::cout << "Result of adding: " << result1 << std::endl;
    std::cout << "Result of multiplying: " << result2 << std::endl;

    return 0;
}
