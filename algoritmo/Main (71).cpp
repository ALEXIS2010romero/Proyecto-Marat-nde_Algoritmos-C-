#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
        if(arr[i] % 2 == 0) suma += arr[i];
    }

    cout << "Suma de los números pares: " << suma << endl;
    return 0;
}
