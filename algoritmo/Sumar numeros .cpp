#include <iostream>
using namespace std;
int main() {
    // EjercicioC157: Sumar numeros del 1 al n
    int n;
    cout << "Ingrese n: ";
    if(!(cin >> n)) return 0;
    long long suma = 0;
    for (int i = 1; i <= n; ++i) suma += i;
    cout << "Suma = " << suma << endl;
    return 0;
}
