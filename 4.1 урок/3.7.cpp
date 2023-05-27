//самостоятельная базовая 4, №3.7


#include <iostream>
using namespace std;

int main() {
  int A[3][4];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << "Введите элемент А[" << i << "][" << j << "]: ";
      cin >> A[i][j];
    }
  }

  int min_element_1st_row = A[0][0];
  int min_column_1st_row = 0;
  for (int j = 1; j < 4; j++) {
    if (A[0][j] < min_element_1st_row) {
      min_element_1st_row = A[0][j];
      min_column_1st_row = j;
    }
  }

  int min_element_3rd_row = A[2][0];
  int min_column_3rd_row = 0;
  for (int j = 1; j < 4; j++) {
    if (A[2][j] < min_element_3rd_row) {
      min_element_3rd_row = A[2][j];
      min_column_3rd_row = j;
    }
  }

int temp = A[0][min_column_1st_row];
  A[0][min_column_1st_row] = A[2][min_column_3rd_row];
  A[2][min_column_3rd_row] = temp;

  cout << "Матрица А после замены наименьших элементов:" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << A[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
