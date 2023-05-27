//Сам. раб. 5 прод. #10


#include <iostream>
#include <cmath> 
using namespace std;

const int vecSize = 3; 
double dotProduct(double vec1[], double vec2[]);
double vectorLength(double vec[]);
double angleBetweenVectors(double vec1[], double vec2[]);

int main() 
{
    double vector1[vecSize], vector2[vecSize];

     cout << "Введите элементы первого вектора:\n";
    for (int i = 0; i < vecSize; i++) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> vector1[i];
    }

    cout << "\nВведите элементы второго вектора:\n";
    for (int i = 0; i < vecSize; i++) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> vector2[i];
    }
double angle = angleBetweenVectors(vector1, vector2);

    cout << "\nУгол между векторами: " << angle << " радиан" << endl;

    return 0;
}

double dotProduct(double vec1[], double vec2[]) {
    double result = 0;
    for (int i = 0; i < vecSize; i++) {
        result += vec1[i] * vec2[i];
    }
    return result;
}

double vectorLength(double vec[]) {
    double sum = 0;
    for (int i = 0; i < vecSize; i++) {
        sum += vec[i] * vec[i];
    }
    return sqrt(sum);
}

double angleBetweenVectors(double vec1[], double vec2[]) {
    double dotProd = dotProduct(vec1, vec2);
    double vec1Len = vectorLength(vec1);
    double vec2Len = vectorLength(vec2);
    double cosAngle = dotProd / (vec1Len * vec2Len);
    return acos(cosAngle);
}
