//сам раб 4 провинутый (7)


#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE];
    srand(time(NULL)); 

    cout << "Массив: ";
    for (int i = 0; i < SIZE; ++i) { 
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " "; 
     }

     int min_elem = arr[0]; 

     for (int i=1;i<SIZE;++i){
         if(arr[i]<min_elem)
             min_elem=arr[i];
      }
      
      cout<<"\nНаименьший элемент в массиве: "<<min_elem<<endl;

   return 0;
}
