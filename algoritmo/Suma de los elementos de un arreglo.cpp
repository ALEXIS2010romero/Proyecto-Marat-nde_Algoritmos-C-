#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int arr[n];
    int suma = 0;

    cout << "Ingrese " << n << " números:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        suma += arr[i]; // Sumamos cada elemento
    }

    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}
