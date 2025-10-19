#include <iostream>
using namespace std;

int main() {
    float base, altura, area;

    // Entrada de datos
    cout << "Ingrese la base del triángulo: ";
    cin >> base;
    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;

    // Proceso: calcular el área
    area = (base * altura) / 2;

    // Salida del resultado
    cout << "El área del triángulo es: " << area << endl;

    return 0;
}
