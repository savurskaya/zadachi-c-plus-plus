//сам работа 1 базовый (19)


#include <iostream>
using namespace std;

int main() {
    float edge;
    cout << "Enter the length of the cube's edge: ";
    cin >> edge;

    float volume = pow(edge, 3);
    cout << "The volume of the cube is: " << volume << endl;

    float surfaceArea = 6 * pow(edge, 2);
   cout<<"The surface area of a cube is : "<<surfaceArea<<endl;
    
   return 0;
}


