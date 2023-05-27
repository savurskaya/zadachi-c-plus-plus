//самостоятельная базовая 3, 5.65

#include <iostream>
using namespace std;

int main() 
{
    const int NUM_REGIONS = 12; 
    float densities[NUM_REGIONS]; 
    float populations[NUM_REGIONS]; 

   
    for (int i = 0; i < NUM_REGIONS; i++) {
        cout << "Введите плотность населения " << i+1 << "-го района в тысячах человек на км^2: ";
        cin >> densities[i];
        cout << "Введите количество жителей " << i+1 << "-го района в тысячах человек: ";
        cin >> populations[i];
    }

    float total_population = 0; 
    float total_area = 0; 
    for (int i = 0; i < NUM_REGIONS; i++) {
        total_population += populations[i]; 
        total_area += populations[i] / densities[i]; 
    }

    cout << "Общая площадь территории области: " << total_area << " км^2" << endl;

    return 0;
}


