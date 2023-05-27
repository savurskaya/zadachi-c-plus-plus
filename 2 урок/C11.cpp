// Урок 2 с/р С11

#include <iostream>
using namespace std;

int main() {
char orientation;
int command1, command2;

cout << "Enter orientation (N, S, E or W): ";
cin >> orientation;

cout << "Enter first command (-1, 1 or 2): ";
cin >> command1;

cout << "Enter second command (-1, 1 or 2): ";
cin >> command2;

switch (orientation) {
    case 'N':
        if (command1 == 1)
            orientation = 'W';
        else if (command1 == -1)
            orientation = 'E';
        else if (command1 == 2)
            orientation = 'S';
        if (command2 == 1)
            orientation = 'W';
        else if (command2 == -1)
            orientation = 'E';
        else if (command2 == 2)
            orientation = 'S';
        break;
        
    case 'W':
        if (command1 == 1)
            orientation = 'S';
        else if (command1 == -1)
            orientation = 'N';
        else if (command1 == 2)
            orientation = 'E';
        if (command2 == 1)
            orientation = 'S';
        else if (command2 == -1)
            orientation = 'N';
        else if (command2 == 2)
            orientation = 'E';
        break;
        
    case 'S':
        if (command1 == 1)
            orientation = 'E';
        else if (command1 == -1)
            orientation = 'W';
        else if (command1 == 2)
            orientation = 'N';
        if (command2 == 1)
            orientation = 'E';
        else if (command2 == -1)
            orientation = 'W';
        else if (command2 == 2)
            orientation = 'N';
        break;
        
    case 'E':
        if (command1 == 1)
            orientation = 'N';
        else if (command1 == -1)
            orientation = 'S';
        else if (command1 == 2)
            orientation = 'W';
        if (command2 == 1)
            orientation = 'N';
        else if (command2 == -1)
            orientation = 'S';
        else if (command2 == 2)
            orientation = 'W';
        break;
        
    default:
        cout << "Invalid orientation!";
        return 0;
}

cout << "Final orientation: " << orientation;

return 0;
}