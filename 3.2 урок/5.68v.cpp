// 3 урок баз. 5.68(B)


int A;
cout << "Введите число A: ";
cin >> A;

int numerator1 = 1, denominator1 = 1;
int numerator2 = 2, denominator2 = 1;
int numerator, denominator, sum = 3;

for (int i = 3; i <= n; i++) {
    numerator = numerator1 + numerator2;
    denominator = denominator1 + denominator2;
    sum += numerator;
    numerator1 = numerator2;
    denominator1 = denominator2;
    numerator2 = numerator;
    denominator2 = denominator;
}

if (sum > A) {
    cout << "Сумма первых " << n << " членов последовательности больше числа A.";
} else {
    cout << "Сумма первых " << n << " членов последовательности не больше числа A.";
}