#include <iostream>
using namespace std;

int main() {
    int n;
    bool esPrimo = true;

    cout << "Ingrese un número: ";
    cin >> n;

    if (n <= 1) {
        esPrimo = false; // 0 y 1 no son primos
    } else {
        // Verificamos divisores desde 2 hasta n/2
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo)
        cout << n << " es un número primo." << endl;
    else
        cout << n << " no es un número primo." << endl;

    return 0;
}
