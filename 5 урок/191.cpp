//Задание 191, 5 урок

#include <iostream>

int factorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    std::cout << "Таблица факториалов:" << std::endl;
    std::cout << "n\tn!\n";

    for (int n = 0; n <= 10; n++)
    {
        std::cout << n << "\t" << factorial(n) << std::endl;
    }

    return 0;
}