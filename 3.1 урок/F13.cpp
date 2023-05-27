//самостоятельная базовая 3, №F13
#include <iostream>

int main() {
    int N;
    double value = 1.1;
    int sign_multiplier = 1;
    std::cout << "Enter an integer N: ";
    std::cin >> N;
    for(int i = 2; i <= N; i++) {
        value += sign_multiplier * 0.1 * i;
        sign_multiplier *= -1;
    }
    std::cout << "Value of 1.1 - 1.2 + 1.3 - ... + (-1)^N * (N+1)/10 is: " << value << std::endl;
    return 0;
}