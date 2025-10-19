#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;

    // Algoritmo de Euclides
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    cout << "El MCD es: " << a << endl;
    return 0;
}
