#include <iostream>
using namespace std;

int main() {
    int numero;

    // Entrada de datos
    cout << "Ingrese un número para mostrar su tabla de multiplicar: ";
    cin >> numero;

    // Proceso: mostrar tabla de multiplicar del 1 al 10
    cout << "Tabla de multiplicar del " << numero << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
