//самостоятельная базовая 3, №F11
#include <iostream>

int main() {
    int N;
    long long sum = 0;
    std::cout << "Enter an integer N: ";
    std::cin >> N;
    for(int i = N; i <= 2 * N; i++) {
        sum += i * i;
    }
    std::cout << "Sum of N^2 + (N+1)^2 + (N+2)^2 + ... + (2N)^2 is: " << sum << std::endl;
    return 0;
}