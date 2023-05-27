//1--продвинутый 16


#include <cmath>
#include <iostream>
using namespace std;
template <class T>
bool SafeInput(const char * sMsg, T &val);
 
int main()
{
    setlocale(LC_ALL,"RUS");
    double P1 = 0;
    double P2 = 0;
    double V1 = 0;
    double V2 = 0;
    while(true)
    {
        if(!SafeInput("P2 = ", P2))
            cout<<"Ошибка ввода"<<endl;
        else
        if(P2 <= 0)
            cout<<"P2 должно быть положительно и не равно 0"<<endl;
        else
        if(!SafeInput("V2 = ", V2))
            cout<<"Ошибка ввода"<<endl;
        else
        if(V2 <= 0)
            cout<<"V2 должно быть положительно и не равно 0"<<endl;
        else
       if(!SafeInput("P1 = ", P1))
            cout<<"Ошибка ввода"<<endl;
        else
       if(!SafeInput("V1 = ", V1))
            cout<<"Ошибка ввода"<<endl;
        else
            ((P2*V2-P1*V1)< 0 || (P2-P1)< 0)
            ?
            cout<<"V = "<<("Объем не может быть отрицательным")
            :
            cout<<"V = "<<((P2*V2-P1*V1)/(P2-P1));
            cout<<endl;
    }
    return 0;
}
 
 
template <class T>
bool SafeInput(const char * sMsg, T &val)
{
    bool bInput = true;
    cout<<sMsg;
    if(!(cin>>val))
        bInput = false;
    if(!bInput)
    {
        cin.sync();
        cin.clear();
    }
    return bInput;
}

