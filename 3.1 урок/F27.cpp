//сам раб 3 баз F27
# include 
# include 
# include 
# include 
# include 
 
using namespace std;
 
int main ()
{
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
 
  double X;
  cout << "Введите вещественное число X (|X|<1): ";   cin >> X;
  int N;
  cout << "Введите целое число N (>0): ";
  cin >> N;
  double answer;
  double z, h; 
  double stepen;
  z = stepen =1;
  h = X;
  answer = X;
  for(int i=1; i <= N ;i++) {
    h = h * X * X;             
    stepen = stepen* (2*i-1);   
    z = z * (i*2+1)*(i*2);     
    answer += (stepen * h) / z; 
    z = z / (i*2+1);         
  }
  cout << "answer = " << answer << endl;
  double y;
  y = asin(X);
  cout << "arcsin(X)= " << y << endl;
 
  system ("pause");
  return 0;
}
