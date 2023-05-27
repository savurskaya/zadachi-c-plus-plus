//сам.р. 3 Баз 5.60

#include <iostream>

using namespace std;

int main() {
    int january[31]; 
    int march[31]; 
    float avgRainfall[2] = {0, 0}; 
    cout << "Количество осадков в январе: ";
    for (int i = 0; i < 31; i++) {
        cin >> january[i];
        avgRainfall[0] += january[i]; 
    }
    
    cout << "Количество осадков в марте: ";
    for (int i = 0; i < 31; i++) {
        cin >> march[i];
        avgRainfall[1] += march[i]; 
    }
    
    avgRainfall[0] /= 31; 
    avgRainfall[1] /= 31; 
    
   
    cout << "Среднедневное количество осадков в январе: " << avgRainfall[0] << endl;
    cout << "Среднедневное количество осадков в марте: " << avgRainfall[1] << endl;
    
    return 0;
}