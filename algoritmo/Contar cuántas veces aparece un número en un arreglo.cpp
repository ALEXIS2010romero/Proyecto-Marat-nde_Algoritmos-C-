#include <iostream>
using namespace std;

int main() {
    int n, x, contador = 0;
    cout << "Tamaño del arreglo: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Numero a buscar: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) contador++;
    }

    cout << "El numero aparece " << contador << " veces";
    return 0;
}

