//Самостоятельная работа 2, С18

#include <iostream>
using namespace std;

int main() {
    int num, ones, tens, hundreds;
    string ones_arr[] = {"", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"};
    string tens_arr[] = {"", "десять", "двадцать", "тридцать", "сорок", "пятьдесят", "шестьдесят", "семьдесят", "восемьдесят", "девяносто"};
    string hundreds_arr[] = {"", "сто", "двести", "триста", "четыреста", "пятьсот", "шестьсот", "семьсот", "восемьсот", "девятьсот"};

    cout << "Введите целое число от 100 до 999: ";
    cin >> num;

    ones = num % 10;
    tens = (num / 10) % 10;
    hundreds = num / 100;

    cout << hundreds_arr[hundreds] << " ";
    if (tens == 1) {
        cout << ones_arr[ones + 1] << endl;
    } else {
        cout << tens_arr[tens] << " " << ones_arr[ones] << endl;
    }

    return 0;
}
