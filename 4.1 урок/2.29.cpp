// 4 урок баз. 2.29
#include <iostream>
using namespace std;

int main() {
    double arr[18];
    double prod_pos = 1, sum_neg = 0, result;

    for (int i = 0; i < 18; i++) {
        cout << "Введите элемент массива: ";
        cin >> arr[i];
        if (arr[i] > 0) {
            prod_pos *= arr[i];
        } else if (arr[i] < 0) {
            sum_neg += abs(arr[i]);
        }
    }

     if (sum_neg == 0) {
        cout << "Деление на ноль невозможно." << endl;
    } else {
        result = prod_pos / sum_neg;
        cout << "Результат: " << result << endl;
    }

    return 0;
}
