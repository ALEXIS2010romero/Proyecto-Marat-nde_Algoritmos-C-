#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int inicio, fin;
    cout << "Rango inicial y final: ";
    cin >> inicio >> fin;

    cout << "Primos: ";
    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) cout << i << " ";
    }
    return 0;
}
