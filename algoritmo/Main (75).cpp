#include <iostream>
using namespace std;

int main() {
    int n, num;
    cout << "Cantidad de elementos: ";
    cin >> n;
    int arr[n];

    cout << "Ingrese los elementos en orden ascendente:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Ingrese número a buscar: ";
    cin >> num;

    int inicio = 0, fin = n - 1, medio;
    bool encontrado = false;

    while(inicio <= fin) {
        medio = (inicio + fin) / 2;
        if(arr[medio] == num) {
            encontrado = true;
            break;
        } else if(arr[medio] < num) inicio = medio + 1;
        else fin = medio - 1;
    }

    if(encontrado) cout << "Número encontrado en posición " << medio << endl;
    else cout << "No se encontró el número." << endl;
    return 0;
}


