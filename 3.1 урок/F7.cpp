//самостоятельная базовая 3, №F7
#include <iostream> 
int main() { 
    int A, B; 
    std::cout << "Enter two integers A and B (A < B): ";
    std::cin >> A >> B; 
    int sum = 0;
    for (int i = A; i <= B; i++) { 
        sum += i;
    }
    std::cout << "The sum of all integers from " << A << " to " << B << " is " << sum << std::endl; 
    return 0; 
}