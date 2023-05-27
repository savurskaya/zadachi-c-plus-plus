//сам раб 2 C15
#include <iostream>
using namespace std;

int main() {
    int N, M;
    cout << "Введите достоинство карты (от 6 до 14): ";
    cin >> N;
    cout << "Введите масть карты (1 - пики, 2 - трефы, 3 - бубны, 4 - червы): ";
    cin >> M;

    switch (N) {
        case 6:
            cout << "шестерка ";
            break;
        case 7:
            cout << "семерка ";
            break;
        case 8:
            cout << "восьмерка ";
            break;
        case 9:
            cout << "девятка ";
            break;
        case 10:
            cout << "десятка ";
            break;
        case 11:
            cout << "валет ";
            break;
        case 12:
            cout << "дама ";
            break;
        case 13:
            cout << "король ";
            break;
        case 14:
            cout << "туз ";
            break;
        default:
            cout << "Достоинство карты должно быть от 6 до 14";
            return 0;
    }

    switch (M) {
        case 1:
            cout << "пик";
            break;
        case 2:
            cout << "треф";
            break;
        case 3:
            cout << "бубен";
            break;
        case 4:
            cout << "червей";
            break;
        default:
            cout << "Масть карты должна быть от 1 до 4";
    }

    return 0;
}
