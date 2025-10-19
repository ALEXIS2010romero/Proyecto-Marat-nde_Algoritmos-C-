#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamaño de los arreglos: ";
    cin >> n;

    int a[n], b[n], c[n];

    cout << "Ingrese los elementos del primer arreglo:" << endl;
    for(int i = 0; i < n; i++) cin >> a[i];

    cout << "Ingrese los elementos del segundo arreglo:" << endl;
    for(int i = 0; i < n; i++) cin >> b[i];

    for(int i = 0; i < n; i++)
        c[i] = a[i] + b[i];

    cout << "Resultado de la suma: ";
    for(int i = 0; i < n; i++)
        cout << c[i] << " ";

    cout << endl;
    return 0;
}


