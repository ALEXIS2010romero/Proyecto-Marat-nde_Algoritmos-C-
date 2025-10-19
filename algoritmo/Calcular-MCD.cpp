#include <iostream>
using namespace std;

// Función para calcular el MCD usando el algoritmo de Euclides
int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese dos números
    cout << "Introduce el primer número: ";
    cin >> num1;

    cout << "Introduce el segundo número: ";
    cin >> num2;

    // Calcular y mostrar el MCD
    cout << "El máximo común divisor de " << num1 << " y " << num2 << " es: " << mcd(num1, num2) << endl;

    return 0;
}
