#include <iostream>
using namespace std;

int main() {
    int n, dato;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese " << n << " números en orden ascendente:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Ingrese el número a buscar: ";
    cin >> dato;

    int inicio = 0;
    int fin = n - 1;
    bool encontrado = false;

    // Algoritmo de Búsqueda Binaria
    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;

        if (arr[medio] == dato) {
            encontrado = true;
            cout << "Número encontrado en la posición " << medio << endl;
            break;
        } else if (arr[medio] < dato) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    if (!encontrado) {
        cout << "Número no encontrado." << endl;
    }

    return 0;
}
