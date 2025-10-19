#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    int arr[n], suma = 0;
    for(int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
        if(arr[i] > 0) suma += arr[i];
    }

    cout << "Suma de números positivos: " << suma << endl;
    return 0;
}





