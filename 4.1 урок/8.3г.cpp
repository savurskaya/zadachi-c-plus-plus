// сам.раб. 4 8.3(г)

#include <iostream>

int main() {
int n = 5;
for (int i = 0; i < n; i++) {
for (int j = 0; j < n-i; j++) {
std::cout << 5*(i+1) << " ";
}
std::cout << std::endl;
}
return 0;
}