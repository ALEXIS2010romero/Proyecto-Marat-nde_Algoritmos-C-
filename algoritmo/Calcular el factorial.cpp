#include <iostream>
using namespace std;
int main() {
    // EjercicioC154: Calcular factorial de n (lee n)
    long long n;
    cout << "Ingrese un numero entero no negativo: ";
    if(!(cin >> n)) return 0;
    long long fact = 1;
    for (long long i = 1; i <= n; ++i) fact *= i;
    cout << "Factorial(" << n << ") = " << fact << endl;
    return 0;
}
