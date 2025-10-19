#include <iostream>
using namespace std;

int main() {
    double a, b, division;

    cout << "Ingrese el primer número (dividendo): ";
    cin >> a;

    cout << "Ingrese el segundo número (divisor): ";
    cin >> b;

    if (b == 0) {
        cout << "Error: No se puede dividir entre cero." << endl;
    } else {
        division = a / b;
        cout << "La división de " << a << " / " << b << " es: " << division << endl;
    }

    return 0;
}
