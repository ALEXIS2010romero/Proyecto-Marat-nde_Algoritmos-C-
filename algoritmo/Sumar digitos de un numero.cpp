#include <iostream>
using namespace std;
int main() {
    // EjercicioC161: Sumar digitos de un numero
    long long num;
    cout << "Ingrese un numero entero: ";
    if(!(cin >> num)) return 0;
    long long x = (num >= 0 ? num : -num);
    int suma = 0;
    while (x > 0) {
        suma += x % 10;
        x /= 10;
    }
    cout << "Suma de digitos = " << suma << endl;
    return 0;
}
