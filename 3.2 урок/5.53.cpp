//Самостоятельная работа 3 базовая задача 5.53

#include <iostream>

int main() {

const int numSubjects = 10;

int marks[numSubjects];

double sum = 0, average;

std::cout << "Enter the marks of the student for " << numSubjects << " subjects: ";

for (int i = 0; i < numSubjects; ++i) {

std::cin >> marks[i];

sum += marks[i];

}

average = sum / numSubjects;

std::cout << "Average mark: " << average << std::endl;

return 0;

}

