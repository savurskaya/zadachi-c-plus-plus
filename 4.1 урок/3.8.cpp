//самостоятельная базовая 4, №3.8

#include <iostream>
using namespace std;

int main() {
  int N;
  cout << "Введите размер матрицы: ";
  cin >> N;
  float A[N][N];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << "Введите элемент А[" << i << "][" << j << "]: ";
      cin >> A[i][j];
    }
  }

  float min_elements[N];
  for (int j = 0; j < N; j++) {
    float min_element = A[0][j];
    for (int i = 1; i < N; i++) {
      if (A[i][j] < min_element) {
        min_element = A[i][j];
      }
    }
    min_elements[j] = min_element;
  }

  float product = 1;
  for (int j = 0; j < N; j++) {
    product *= min_elements[j];
  }

  cout << "Произведение наименьших элементов каждого столбца матрицы A: " << product << endl;

  return 0;
}
