#include <iostream>
using namespace std;

int main() {
    float numeros[5];
    float suma = 0, promedio;

    // Entrada de datos
    cout << "Ingrese 5 números:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    // Proceso
    promedio = suma / 5;

    // Salida de resultados
    cout << "\nLa suma de los números es: " << suma << endl;
    cout << "El promedio de los números es: " << promedio << endl;

    return 0;
}
