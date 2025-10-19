#include <iostream>
using namespace std;

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false;  // Los números menores o iguales a 1 no son primos
    }

    for (int i = 2; i * i <= num; i++) {  // Solo iteramos hasta la raíz cuadrada de 'num'
        if (num % i == 0) {
            return false;  // Si 'num' es divisible por 'i', no es primo
        }
    }
    return true;  // Si no se encontró ningún divisor, es primo
}

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    cout << "Introduce un número para verificar si es primo: ";
    cin >> num;

    // Verificar si el número es primo y mostrar el resultado
    if (esPrimo(num)) {
        cout << num << " es un número primo." << endl;
    } else {
        cout << num << " no es un número primo." << endl;
    }

    return 0;
}
