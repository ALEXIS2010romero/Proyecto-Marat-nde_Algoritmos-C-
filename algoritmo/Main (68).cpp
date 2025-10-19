#include <iostream>
using namespace std;

int main() {
    int num, suma = 0, digito;
    cout << "Ingrese un número: ";
    cin >> num;

    while(num > 0) {
        digito = num % 10;
        suma += digito;
        num /= 10;
    }

    cout << "La suma de los dígitos es: " << suma << endl;
    return 0;
}

