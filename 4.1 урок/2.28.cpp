// 4 урок баз. 2.28
#include <iostream>
using namespace std;

int main() {
    int arr[17];
    int sum = 0, count = 0, pos_sum = 0, pos_count = 0;
    double avg_pos;

    for (int i = 0; i < 17; i++) {
        cout << "Введите элемент массива: ";
        cin >> arr[i];
        if (arr[i] > 0) {
            pos_sum += arr[i];
            pos_count++;
        }
    }

    avg_pos = (double)pos_sum / pos_count;

    for (int i = 0; i < 17; i++) {
        if (abs(arr[i]) > avg_pos) {
            sum += arr[i];
            count++;
        }
    }

    cout << "Сумма элементов, абсолютное значение которых больше среднего арифметического положительных элементов: " << sum << endl;
    cout << "Количество таких элементов: " << count << endl;

    return 0;
}