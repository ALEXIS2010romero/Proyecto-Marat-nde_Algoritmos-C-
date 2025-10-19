#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    float arr[n], suma = 0, max, min;

    for(int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> arr[i];
        suma += arr[i];
        if(i == 0) { max = min = arr[i]; }
        else {
            if(arr[i] > max) max = arr[i];
            if(arr[i] < min) min = arr[i];
        }
    }

    cout << "Promedio: " << suma / n << endl;
    cout << "Máximo: " << max << ", Mínimo: " << min << endl;
    return 0;
}
