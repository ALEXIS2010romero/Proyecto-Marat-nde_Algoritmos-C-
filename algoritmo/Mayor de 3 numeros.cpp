#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Ingresa el primer número: ";
    cin >> num1;

    cout << "Ingresa el segundo número: ";
    cin >> num2;

    cout << "Ingresa el tercer número: ";
    cin >> num3;

    int mayor = num1;

    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }

    cout << "El número mayor es: " << mayor << endl;

    return 0;
}