// сам.раб. 4 8.3(в)

#include <iostream>

int main() {
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) {
            std::cout << i * 10 << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}