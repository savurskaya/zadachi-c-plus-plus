//самостоятельная базовая 3, 5.64

#include <iostream>
using namespace std;

int main() 
{
    const int NUM_REGIONS = 12;
    float areas[NUM_REGIONS]; 
    float populations[NUM_REGIONS]; 

   
    for (int i = 0; i < NUM_REGIONS; i++) {
        cout << "Введите площадь " << i+1 << "-го района в км^2: ";
        cin >> areas[i];
        cout << "Введите количество жителей " << i+1 << "-го района в тысячах человек: ";
        cin >> populations[i];
    }

    float total_population = 0; 
    float total_area = 0; 
    for (int i = 0; i < NUM_REGIONS; i++) {
        total_population += populations[i]; 
        total_area += areas[i]; 
    }

    float avg_density = total_population / total_area; 
    cout << "Общее население в области: " << total_population << " тысяч человек" << endl;
    cout << "Средняя плотность населения в области: " << avg_density << " человек на км^2" << endl;

    return 0;
}

