//самостоятельная базовая 3, №F6

#include <iostream> 

int main() { 
    float price; 
    std::cout << "Enter the price per kilogram of candy: "; 
    std::cin >> price; 
    for (float kilos = 1.2; kilos <= 2.0; kilos += 0.2) { 
        float cost = kilos * price; 
        std::cout << "Cost of " << kilos << " kg of candy: " << cost << std::endl;
    }
    return 0; 
}
