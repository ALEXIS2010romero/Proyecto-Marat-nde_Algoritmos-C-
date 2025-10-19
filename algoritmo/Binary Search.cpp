#include <iostream>
using namespace std;

int main() {
    int numero, invertido = 0;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Algoritmo para invertir el número
    while (numero != 0) {
        int digito = numero % 10;        // Obtiene el último dígito
        invertido = invertido * 10 + digito; // Lo agrega al número invertido
        numero /= 10;                    // Elimina el último dígito
    }

    cout << "El número invertido es: " << invertido << endl;

    return 0;
}
