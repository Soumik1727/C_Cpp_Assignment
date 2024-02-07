#include <iostream>

// Base case: when there are no more arguments, return 0
int sum() {
    return 0;
}

// Recursive case: sum the first argument and call the function with the rest of the arguments
template<typename T, typename... Args>
int sum(T first, Args... rest) {
    return first + sum(rest...);
}

int main() {
    // Example usage
    int result = sum(1, 2, 3, 4, 5);
    std::cout << "Sum: " << result << std::endl; // Output: Sum: 15

    result = sum(10, 20, 30);
    std::cout << "Sum: " << result << std::endl; // Output: Sum: 60

    result = sum(5);
    std::cout << "Sum: " << result << std::endl; // Output: Sum: 5

    return 0;
}
