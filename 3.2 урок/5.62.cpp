//сам.р. 3 Баз 5.62

#include <iostream>

using namespace std;

int main() {
    int classA[30]; 
    int classB[30]; 
    float avgGrade[2] = {0, 0}; 
    cout << "Оценки по физике учеников класса А: ";
    for (int i = 0; i < 30; i++) {
        cin >> classA[i];
        avgGrade[0] += classA[i]; 
    }
    
    cout << "Оценки по физике учеников класса В: ";
    for (int i = 0; i < 30; i++) {
        cin >> classB[i];
        avgGrade[1] += classB[i]; 
    }
    
    avgGrade[0] /= 30;
    avgGrade[1] /= 30; 
    
    
    cout << "Средняя оценка по физике учеников класса А: " << avgGrade[0] << endl;
    cout << "Средняя оценка по физике учеников класса В: " << avgGrade[1] << endl;
    
    return 0;
}