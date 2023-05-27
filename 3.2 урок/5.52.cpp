//Самостоятельная работа 3 базовая задача 5.52

#include <iostream>

int main() {

const int numStudents = 20;

int marks[numStudents];

double sum = 0, average;

std::cout << "Enter the marks of " << numStudents << " students: ";

for (int i = 0; i < numStudents; ++i) {

std::cin >> marks[i];

sum += marks[i];

}

average = sum / numStudents;

std::cout << "Average mark: " << average << std::endl;

return 0;

}