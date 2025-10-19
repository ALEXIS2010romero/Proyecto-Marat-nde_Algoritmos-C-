#include <iostream>
using namespace std;

int main() {
    char opcion;
    do {
        int a, b;
        cout << "Ingrese dos números: ";
        cin >> a >> b;
        cout << "La suma es: " << a + b << endl;

        cout << "¿Desea continuar? (s/n): ";
        cin >> opcion;
    } while(opcion == 's' || opcion == 'S');

    cout << "Programa finalizado." << endl;
    return 0;
}

