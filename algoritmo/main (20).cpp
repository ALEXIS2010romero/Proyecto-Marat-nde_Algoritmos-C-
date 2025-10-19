#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de notas: ";
    cin >> n;

    float notas[n], suma = 0;
    for(int i = 0; i < n; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas[i];
        suma += notas[i];
    }

    cout << "El promedio general es: " << suma / n << endl;
    return 0;
}



