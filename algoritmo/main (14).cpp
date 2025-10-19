#include <iostream>
using namespace std;

int main() {
    int arr[10], buscar;
    bool encontrado = false;

    for(int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Ingrese el número a buscar: ";
    cin >> buscar;

    for(int i = 0; i < 10; i++) {
        if(arr[i] == buscar) {
            encontrado = true;
            cout << "Número encontrado en la posición " << i + 1 << endl;
        }
    }

    if(!encontrado)
        cout << "El número no está en el arreglo." << endl;

    return 0;
}



