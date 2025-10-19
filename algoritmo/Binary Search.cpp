#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese los elementos ORDENADOS del arreglo: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Ingrese el número a buscar: ";
    cin >> x;

    int inicio = 0, fin = n - 1;
    bool encontrado = false;

    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;
        if (arr[medio] == x) {
            cout << "Elemento encontrado en la posición: " << medio << endl;
            encontrado = true;
            break;
        } else if (arr[medio] < x) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }

    if (!encontrado) {
        cout << "Elemento no encontrado." << endl;
    }

    return 0;
}
