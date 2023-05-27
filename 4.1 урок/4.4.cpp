//4.4, 4 урок

#include <iostream>
using namespace std;

const int n = 3, m = 4;

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool has_duplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int A[n][m] = {
        {1, 2, 3, 4},
        {5, 6, 7, 5},
        {8, 9, 10, 11}
    };
    int B[n];
    int k = 0;

    for (int i = 0; i < n; i++) {
        if (has_duplicates(A[i], m)) {
            B[k++] = i;
        }
    }

    cout << "Original array:" << endl;
    for (int i = 0; i < n; i++) {
        print_array(A[i], m);
    }

    cout << "New array:" << endl;
    for (int i = 0; i < k; i++) {
        print_array(A[B[i]], m);
    }

    return 0;
}
