// 3 урок баз. 5.68(а)

int k;
cout << "Введите номер члена k: ";
cin >> k;

int numerator1 = 1, denominator1 = 1;
int numerator2 = 2, denominator2 = 1;
int numerator_k, denominator_k;

if (k == 1) {
    numerator_k = numerator1;
    denominator_k = denominator1;
} else if (k == 2) {
    numerator_k = numerator2;
    denominator_k = denominator2;
} else {
    for (int i = 3; i <= k; i++) {
        numerator_k = numerator1 + numerator2;
        denominator_k = denominator1 + denominator2;
        numerator1 = numerator2;
        denominator1 = denominator2;
        numerator2 = numerator_k;
        denominator2 = denominator_k;
    }
}

cout << "k-й член последовательности: " << numerator_k << "/" << denominator_k << endl;
