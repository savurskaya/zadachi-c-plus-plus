//сам раб 3 баз F31

# include
# include
# include
 
using namespace std;
 
int main ()
 
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
 
  int N;
  cout << "Введите целое число N(>0): ";
  cin >> N;
  double A = 2;
  for (int i = 1; i <= N; ++i) {
   A = 2+1/A;
   cout << A << " ";
  }
  cout << endl;
  system ("pause");
  return 0;
}
