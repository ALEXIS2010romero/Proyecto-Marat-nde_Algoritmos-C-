#include <iostream>
using namespace std;

int main() {
    int n, num, pos = -1;
    cout << "Ingrese cantidad de elementos: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Ingrese el número a buscar: ";
    cin >> num;

    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            pos = i;
            break;
        }
    }

    if(pos != -1) cout << "Número encontrado en la posición " << pos << endl;
    else cout << "Número no encontrado." << endl;

    return 0;
}

