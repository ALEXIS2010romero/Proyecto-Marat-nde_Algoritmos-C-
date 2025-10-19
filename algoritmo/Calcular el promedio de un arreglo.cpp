#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    double suma = 0;
    double numeros[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese número " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    double promedio = suma / n;
    cout << "El promedio es: " << promedio << endl;
    return 0;
}

