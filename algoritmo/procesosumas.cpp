#include <iostream>
using namespace std;

int main() {
    float num1, num2, suma;
    char respuesta;

    // Bucle principal
    do {
        // Entrada de datos
        cout << "Ingrese el primer número: ";
        cin >> num1;
        cout << "Ingrese el segundo número: ";
        cin >> num2;

        // Proceso
        suma = num1 + num2;

        // Salida
        cout << "La suma de los dos números es: " << suma << endl;

        // Preguntar si desea continuar
        cout << "¿Desea realizar otra suma? (s/n): ";
        cin >> respuesta;

        cout << endl; // Espacio visual
    } while (respuesta == 's' || respuesta == 'S');

    cout << "Programa finalizado. ¡Gracias!" << endl;

    return 0;
}
