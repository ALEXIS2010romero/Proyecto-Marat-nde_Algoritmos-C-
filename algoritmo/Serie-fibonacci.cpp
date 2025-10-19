#include <iostream>
using namespace std;

// Función para imprimir la serie de Fibonacci hasta el n-ésimo término
void fibonacci(int n) {
    long long a = 0, b = 1, next;

    // Imprimir los primeros dos números de la serie
    cout << "Serie Fibonacci hasta el término " << n << ": " << a << ", " << b;

    // Calcular el resto de la serie
    for (int i = 2; i < n; i++) {
        next = a + b;
        cout << ", " << next;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;

    // Solicitar al usuario el número de términos de la serie Fibonacci
    cout << "Introduce el número de términos de la serie Fibonacci: ";
    cin >> n;

    // Validar que el número de términos sea positivo
    if (n <= 0) {
        cout << "Por favor, introduce un número positivo." << endl;
    } else {
        // Llamar a la función para imprimir la serie
        fibonacci(n);
    }

    return 0;
}
