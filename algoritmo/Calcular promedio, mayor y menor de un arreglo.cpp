#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    int mayor = arr[0], menor = arr[0], suma = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > mayor) mayor = arr[i];
        if (arr[i] < menor) menor = arr[i];
        suma += arr[i];
    }

    cout << "Promedio: " << (float)suma / n << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;
    return 0;
}
