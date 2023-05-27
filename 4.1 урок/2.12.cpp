//Сам. раб. 4 баз. №2.12


#include <iostream>
#include <algorithm>

int main() {
    double arr[12];
    std::cout << "Введите 12 элементов массива:\n";
    for (int i = 0; i < 12; i++) {
        std::cin >> arr[i];
    }

    std::sort(arr, arr + 12, std::greater<double>());

    std::cout << "Массив в порядке убывания:\n";
    for (int i = 0; i < 12; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    double sum = arr[0] + arr[11];
    std::cout << "Сумма максимального и минимального элементов: " << sum << "\n";

    return 0;
}