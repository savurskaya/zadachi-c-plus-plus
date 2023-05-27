//4 базовый -----2.2

#include <iostream>
 
int main() {
    const int size = 12;
    int array[size];
    float array2[size];
    float sum = 0;
    
    for ( int i = 0; i < size; i++ ) {
        std::cin >> array[i];
        array2[i] = array[i];
        sum += array[i];
    }
    array2[4] = sum / size;
    
    for ( int i = 0; i < size; i++ ) {
        std::cout << array2[i] << " ";
    }
    return 0;
}