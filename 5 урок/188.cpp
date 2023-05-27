//Занятие5, задание 188
#include <iostream>

using namespace std;

int main() {
    double r1, r2, r_total;
    char conn_type;

    cout << "Введите сопротивление первого резистора: ";
    cin >> r1;
    cout << "Введите сопротивление второго резистора: ";
    cin >> r2;
    cout << "Введите тип соединения (S для последовательного, P для параллельного): ";
    cin >> conn_type;

    if (conn_type == 'S' || conn_type == 's') {
        r_total = r1 + r2;
    }
    else if (conn_type == 'P' || conn_type == 'p') {
        r_total = (r1 * r2) / (r1 + r2);
    }
    else {
        cout << "Ошибка: неверно указан тип соединения." << endl;
        return -1;
    }

    cout << "Сопротивление цепи: " << r_total << endl;

    return 0;
}
