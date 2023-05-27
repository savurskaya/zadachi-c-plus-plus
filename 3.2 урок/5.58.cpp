//сам.р. 3 Баз 5.58

#include <iostream>

using namespace std;

int main() {
    int a[2][5]; 
    int sum[2] = {0, 0}; 
    for (int i = 0; i < 2; i++) {
        cout << "Результаты спортсмена " << i + 1 << ": ";
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
            sum[i] += a[i][j]; 
            }
    }
    
    for (int i = 0; i < 2; i++) {
        cout << "Сумма баллов спортсмена " << i + 1 << ": " << sum[i] << endl;
    }
    
    return 0;
}