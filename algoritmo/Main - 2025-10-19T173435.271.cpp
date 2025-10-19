#include <iostream>
using namespace std;

int main() {
    int a1, d, n;
    cout << "Primer término: "; cin >> a1;
    cout << "Diferencia: "; cin >> d;
    cout << "Cantidad de términos: "; cin >> n;
    cout << "Suma total: " << n * (2 * a1 + (n - 1) * d) / 2;
}

