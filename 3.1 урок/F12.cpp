//самостоятельная базовая 3, №F12
#include <iostream>

int main() {
    int N;
    double product = 1.1;
    std::cout << "Enter an integer N: ";
    std::cin >> N;
    for(int i = 2; i <= N; i++) {
        product *= 1.0 + (i - 1) / 10.0;
    }
    std::cout << "Product of 1.1 * 1.2 * 1.3 * ... * (N+1)/10 is: " << product << std::endl;
    return 0;
}