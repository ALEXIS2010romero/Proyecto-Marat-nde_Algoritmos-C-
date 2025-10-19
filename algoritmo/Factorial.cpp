#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    cout << "Introduce un número para calcular su factorial: ";
    cin >> num;

    // Validación de número negativo
    if (num < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        cout << "El factorial de " << num << " es: " << factorial(num) << endl;
    }

    return 0;
}
