//самостоятельная базовая 4, №3.9


#include <iostream>
using namespace std;

int main() {
    int arr[5][6] = {{1, 2, 3, 4, 5, 6},
                     {7, 8, 9, 10, 11, 12},
                     {13, 14, 15, 16, 17, 18},
                     {19, 20, 21, 22, 23, 24},
                     {25, 26, 27, 28, 29, 30}};
    int sum[6] = {0};
    int max[5] = {0};
    int min[5] = {0};

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 5; j++) {
            sum[i] += arr[j][i];
        }
        cout << "Среднее арифметическое столбца " << i+1 << ": " << sum[i]/5.0 << endl;
    }

    for (int i = 0; i < 5; i++) {
        max[i] = arr[i][0];
        min[i] = arr[i][0];
        for (int j = 1; j < 6; j++) {
            if (arr[i][j] > max[i]) {
                max[i] = arr[i][j];
            }
            if (arr[i][j] < min[i]) {
                min[i] = arr[i][j];
            }
        }
        cout << "Максимум строки " << i+1 << ": " << max[i] << endl;
        cout << "Минимум строки " << i+1 << ": " << min[i] << endl;
    }

    return 0;
}
