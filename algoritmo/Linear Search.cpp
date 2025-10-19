#include <iostream>
using namespace std;

int main() {
    int n, dato, pos = -1;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese " << n << " números:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Ingrese el número a buscar: ";
    cin >> dato;

    // Algoritmo de Búsqueda Lineal
    for (int i = 0; i < n; i++) {
        if (arr[i] == dato) {
            pos = i;
            break; // Se detiene cuando lo encuentra
        }
    }

    if (pos != -1)
        cout << "Número encontrado en la posición " << pos << endl;
    else
        cout << "Número no encontrado." << endl;

    return 0;
}
