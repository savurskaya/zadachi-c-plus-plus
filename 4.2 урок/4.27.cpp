//сам раб 4 баз (4.27)

#include <iostream>

int main() {
int a[3][3], n, m; 
std::cin >> n >> m;
for (int i = 0; i < n * m; i++)
a[i / m][i % m] = (i / m) * (i % m);

for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++)
std::cout << a[i][j] << ' ';
std::cout << '\n';
}

return 0;
}