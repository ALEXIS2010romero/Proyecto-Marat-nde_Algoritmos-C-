#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamaño del arreglo: ";
    cin >> n;

    int arr[n], suma = 0;
    for(int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
        if(arr[i] % 2 == 0)
            suma += arr[i];
    }

    cout << "Suma de los elementos pares: " << suma << endl;
    return 0;
}



