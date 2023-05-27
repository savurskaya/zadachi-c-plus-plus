//сам.р. 3 Баз 5.61

#include <iostream>

using namespace std;

int main() {
    int classA[30]; 
    int classB[30]; 
    float avgHeight[2] = {0, 0}; 
    cout << "Рост учеников класса А: ";
    for (int i = 0; i < 30; i++) {
        cin >> classA[i];
        avgHeight[0] += classA[i]; 
    }
    
    cout << "Рост учеников класса В: ";
    for (int i = 0; i < 30; i++) {
        cin >> classB[i];
        avgHeight[1] += classB[i]; 
    }
    
    avgHeight[0] /= 30; 
    avgHeight[1] /= 30; 
    
    cout << "Средний рост учеников класса А: " << avgHeight[0] << endl;
    cout << "Средний рост учеников класса В: " << avgHeight[1] << endl;
    
    return 0;
}