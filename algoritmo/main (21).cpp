#include <iostream>
using namespace std;

int main() {
    double base, resultado = 1;
    int exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    for(int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    cout << base << "^" << exponente << " = " << resultado << endl;
    return 0;
}




