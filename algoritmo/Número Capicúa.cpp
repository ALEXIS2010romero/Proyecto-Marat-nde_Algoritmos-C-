#include <iostream>
using namespace std;

int main() {
    int numero, invertido = 0, original;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    original = numero; // Guardamos el número original

    // Algoritmo para invertir el número
    while (numero != 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    // Verificamos si es capicúa
    if (original == invertido)
        cout << original << " es un número capicúa." << endl;
    else
        cout << original << " no es un número capicúa." << endl;

    return 0;
}

