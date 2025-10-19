#include <iostream>
using namespace std;

int main() {
    float base, altura, area, perimetro;

    cout << "Ingrese la base del rectángulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectángulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);

    cout << "\nEl área del rectángulo es: " << area << endl;
    cout << "El perímetro del rectángulo es: " << perimetr
