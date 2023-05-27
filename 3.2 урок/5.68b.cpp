// 3 урок баз. 5.68(б)
int n;
cout << "Введите количество членов n: ";
cin >> n;

int numerator1 = 1, denominator1 = 1;
int numerator2 = 2, denominator2 = 1;
int numerator, denominator;

cout << "Первые " << n << " членов последовательности:" << endl;

cout << numerator1 << "/" << denominator1 << endl;
if (n >= 2) {
    cout << numerator2 << "/" << denominator2 << endl;
}
for (int i = 3; i <= n; i++) {
    numerator = numerator1 + numerator2;
    denominator = denominator1 + denominator2;
    cout << numerator << "/" << denominator << endl;
    numerator1 = numerator2;
    denominator1 = denominator2;
    numerator2 = numerator;
    denominator2 = denominator;
}
