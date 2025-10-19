#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Tamaño del arreglo: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        suma += arr[i];
    }
    cout << "La suma total es: " << suma << endl;
}
