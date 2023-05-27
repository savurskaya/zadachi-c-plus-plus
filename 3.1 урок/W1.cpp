//W1, 3 урок

#include <iostream>

int main() {
    int A, B;
    std::cout << "Enter A and B (A > B): ";
    std::cin >> A >> B;
    int num_segments = A / B; 
    int remaining_length = A - num_segments * B;  
    std::cout << "Length of remaining part: " << remaining_length << std::endl;
    return 0;
}