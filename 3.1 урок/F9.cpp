//самостоятельная базовая 3, №F9
#include <iostream>

int main() {
    int a, b;
    long long sum = 0;
    std::cout << "Enter two integers (A < B): ";
    std::cin >> a >> b;
    for(int i = a; i <= b; i++) {
        sum += i * i;
    }
    std::cout << "Sum of squares of all integers from A to B inclusive is: " << sum << std::endl;
    return 0;
}