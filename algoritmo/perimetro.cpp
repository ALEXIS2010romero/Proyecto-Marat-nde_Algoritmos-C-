#include <iostream>
#include <cmath> // Para usar M_PI y pow()
using namespace std;

int main() {
    float radio, area, perimetro;

    // Entrada de datos
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    // Proceso: calcular área y perímetro
    area = M_PI * pow(radio, 2);       // área = π * r²
    perimetro = 2 * M_PI * radio;       // perímetro = 2πr

    // Salida de resultados
    cout << "El área del círculo es: " << area << endl;
    cout << "El perímetro del círculo es: " << perimetro << endl;

    return 0;
}
