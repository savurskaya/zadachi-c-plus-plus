//самостоятельная базовая 3, №F8
#include <iostream>

int main() {
    int a, b;
    long long product = 1;
    std::cout << "Enter two integers (A < B): ";
    std::cin >> a >> b;
    for(int i = a; i <= b; i++) {
        product *= i;
    }
    std::cout << "Product of all integers from A to B inclusive is: " << product << std::endl;
    return 0;
}