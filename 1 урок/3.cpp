//самостоятельная продвинутый 1, №3

#include <iostream>

#include <cmath>

const double g = 9.8; // Ускорение свободного падения (м/с^2)

void calculateInitialVelocityAndAngle(double H, double L, double& V, double& alpha) {

double alphaRad = atan(4 * H / L); // Угол альфа в радианах

alpha = alphaRad * 180 / M_PI; // Угол альфа в градусах

V = sqrt(g * L / sin(2 * alphaRad));

}

int main() {

double H, L;

std::cout << "Введите максимальную высоту подъема (H): ";

std::cin >> H;

std::cout << "Введите дальность полета (L): ";

std::cin >> L;

double V, alpha;

calculateInitialVelocityAndAngle(H, L, V, alpha);

std::cout << "Начальная скорость (V): " << V << " м/с" << std::endl;

std::cout << "Угол альфа: " << alpha << " градусов" << std::endl;

return 0;

}