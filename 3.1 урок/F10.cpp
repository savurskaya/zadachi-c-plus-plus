//самостоятельная базовая 3, №F10
#include <iostream>

int main() {
    int N;
    double sum = 0;
    std::cout << "Enter an integer N: ";
    std::cin >> N;
    for(int i = 1; i <= N; i++) {
        sum += 1.0 / i;
    }
    std::cout << "Sum of 1 + 1/2 + 1/3 + ... + 1/N is: " << sum << std::endl;
    return 0;
}