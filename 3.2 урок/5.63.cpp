//самостоятельная базовая 3, 5.63

#include <iostream>
using namespace std;

int main() 
{
    const int NUM_REGIONS = 10; 
    float areas[NUM_REGIONS]; 
    float yields[NUM_REGIONS]; 

    
    for (int i = 0; i < NUM_REGIONS; i++) {
        cout << "Введите площадь " << i+1 << "-го района в гектарах: ";
        cin >> areas[i];
        cout << "Введите среднюю урожайность " << i+1 << "-го района в центнерах с гектара: ";
        cin >> yields[i];
    }

    float total_yield = 0; 
    for (int i = 0; i < NUM_REGIONS; i++) {
        total_yield += areas[i] * yields[i]; 
    }

    float avg_yield = total_yield / (NUM_REGIONS * 100); 
    cout << "Общий урожай в области: " << total_yield << " центнеров" << endl;
    cout << "Средняя урожайность в области: " << avg_yield << " центнеров с гектара" << endl;

    return 0;
}
