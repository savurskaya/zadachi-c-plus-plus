//4.2, урок 4

#include <iostream>
#include <ctime>
using namespace std;

int main() {
  const int ROWS = 4;
  const int COLS = 4;

  int arr[ROWS][COLS];

  
  srand(time(nullptr)); 
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      arr[i][j] = rand() % 2;
    }
  }

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl; 
  }

  return 0;
}