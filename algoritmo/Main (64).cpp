#include <iostream>
#include <cmath>
using namespace std;

float potencia(float base, int exponente) {
    return pow(base, exponente);
}

int main() {
    float base;
    int exp;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exp;

    cout << "Resultado: " << potencia(base, exp) << endl;
    return 0;
}
