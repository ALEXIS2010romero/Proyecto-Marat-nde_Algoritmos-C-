#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño del arreglo: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int min = arr[0], max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }

    cout << "Mínimo: " << min << "\nMáximo: " << max << endl;
    return 0;
}



