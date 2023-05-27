// сам.раб. 4 8.3(б)

#include <iostream>

int main() {
    for (int i = 5; i <= 9; i++) {
        for (int j = i; j <= 9; j++) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}