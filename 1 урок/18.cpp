//Самостоятельная работа 1 задча 18 продвинутая

#include <iostream>

#include <cmath>

double calculateRelativisticKineticEnergy(double mass, double velocity, double speedOfLight) {

double gamma = 1.0 / std::sqrt(1.0 - (velocity * velocity) / (speedOfLight * speedOfLight));

double kineticEnergy = mass * speedOfLight * speedOfLight * (gamma - 1.0);

return kineticEnergy;

}

double calculateNonRelativisticKineticEnergy(double mass, double velocity) {

double kineticEnergy = (mass * velocity * velocity) / 2.0;

return kineticEnergy;

}

int main() {

// Данные для вычислений

double electronMass = 9.1e-31; // Масса электрона в кг

double speedOfLight = 2.998e8; // Скорость света в м/с

// Ввод скорости электрона

double velocity;

std::cout << "Введите скорость электрона (в м/с): ";

std::cin >> velocity;

// Вычисление кинетической энергии

double relativisticEnergy = calculateRelativisticKineticEnergy(electronMass, velocity, speedOfLight);

double nonRelativisticEnergy = calculateNonRelativisticKineticEnergy(electronMass, velocity);

// Вывод результатов

std::cout << "Релятивистская кинетическая энергия: " << relativisticEnergy << " Дж" << std::endl;

std::cout << "Нерелятивистская кинетическая энергия: " << nonRelativisticEnergy << " Дж" << std::endl;

return 0;

}