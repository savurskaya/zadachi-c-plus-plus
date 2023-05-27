// Урок 4 базовая с/р 3.29

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int rows, cols;
cout << "Enter number of rows and columns: ";
cin >> rows >> cols;
int matrix[rows][cols];
for(int i=0; i<rows; i++) {
    for(int j=0; j<cols; j++) {
        cout << "Enter element (" << i << "," << j << "): ";
        cin >> matrix[i][j];
    }
}

int min_sum = INT_MAX, min_col;
for(int j=0; j<cols; j++) {
    int sum = 0;
    for(int i=0; i<rows; i++) {
        sum += matrix[i][j];
    }
    if(sum < min_sum) {
        min_sum = sum;
        min_col = j;
    }
}

cout << "Column " << min_col << " has the smallest sum of " << min_sum << endl;

return 0;
}
