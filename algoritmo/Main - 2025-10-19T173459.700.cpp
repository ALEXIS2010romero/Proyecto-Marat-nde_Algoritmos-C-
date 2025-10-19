#include <iostream>
using namespace std;

int main() {
    int filas;
    cout << "Ingrese número de filas: ";
    cin >> filas;
    for(int i = 1; i <= filas; i++) {
        for(int j = 1; j <= filas - i; j++) cout << " ";
        for(int k = 1; k <= 2*i - 1; k++) cout << "*";
        cout << endl;
    }
}
