#include <iostream>
using namespace std;

int main() {
    int n;
    int suma = 0;

    cout << "Ingrese un número N: ";
    cin >> n;

    // Algoritmo para sumar los N primeros números
    for (int i = 1; i <= n; i++) {
        suma += i;
    }

    cout << "La suma de los " << n << " primeros números naturales es: " << suma << endl;

    return 0;
}
