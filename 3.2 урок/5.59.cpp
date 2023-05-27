//сам.р. 3 Баз 5.59

#include <iostream>

using namespace std;

int main() {
    float age[2][20]; 
    float avgAge[2] = {0, 0}; 
    for (int i = 0; i < 2; i++) {
        cout << "Возраст учеников " << i + 1 << " класса: ";
        for (int j = 0; j < 20; j++) {
            cin >> age[i][j];
            avgAge[i] += age[i][j]; 
        }
        avgAge[i] /= 20; 
    }
    
    for (int i = 0; i < 2; i++) {
        cout << "Средний возраст учеников " << i + 1 << " класса: " << avgAge[i] << endl;
    }
    
    return 0;
}