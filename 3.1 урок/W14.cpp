//Самостоятельная работа 3 базовая задача while14

#include <iostream>

int main() {

int K = 1;

float sum = 0;

while (sum < 4) {

sum += 1.0 / K;

K++;

}

std::cout << "Largest integer K: " << K - 1 << std::endl;

std::cout << "Sum: " << sum << std::endl;

return 0;

}