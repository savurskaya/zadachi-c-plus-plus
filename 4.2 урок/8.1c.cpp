//сам раб 4 баз, 8.1в

#include <iostream>

using namespace std;

int main()

{

const int n = 4;

const int m = 10;

for (int i = 0; i < n; i++)

{

for (int j = 1; j <= m; j++)

{

cout « i * 10 + j + 40 « " ";

}

cout « endl;

}

return 0;

}

