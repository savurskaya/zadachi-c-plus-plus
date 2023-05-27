//Самостоятельная работа 4 продвинутая задача 10

#include <iostream>

#include <vector>

#include <cmath>

double calculateCentralMoment(const std::vector<double>& values, const std::vector<double>& probabilities, double mean, int order) {

double centralMoment = 0.0;

int n = values.size();

for (int i = 0; i < n; i++) {

centralMoment += std::pow((values[i] - mean), order) * probabilities[i];

}

return centralMoment;

}

int main() {

// Ввод порядка момента

int order;

std::cout << "Введите порядок момента: ";

std::cin >> order;

// Ввод значений случайной величины и соответствующих вероятностей

int n;

std::cout << "Введите количество значений случайной величины: ";

std::cin >> n;

std::vector<double> values(n);

std::vector<double> probabilities(n);

std::cout << "Введите значения случайной величины и соответствующие вероятности:" << std::endl;

for (int i = 0; i < n; i++) {

std::cin >> values[i] >> probabilities[i];

}

// Вычисление математического ожидания

double mean = 0.0;

for (int i = 0; i < n; i++) {

mean += values[i] * probabilities[i];

}

// Вычисление центрального момента

double centralMoment = calculateCentralMoment(values, probabilities, mean, order);

// Вывод результата

std::cout << "Центральный момент порядка " << order << ": " << centralMoment << std::endl;

return 0;

}