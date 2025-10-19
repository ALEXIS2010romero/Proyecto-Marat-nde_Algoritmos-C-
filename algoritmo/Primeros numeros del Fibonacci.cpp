#include <iostream>
using namespace std;
int main() {
    // EjercicioC156: Primeros n numeros de Fibonacci (lee n)
    int n;
    cout << "Ingrese cuantos terminos de Fibonacci desea: ";
    if(!(cin >> n)) return 0;
    int a = 0, b = 1;
    for (int i = 1; i <= n; ++i) {
        if (i == 1) cout << a << " ";
        else if (i == 2) cout << b << " ";
        else {
            int c = a + b;
            cout << c << " ";
            a = b; b = c;
        }
    }
    cout << endl;
    return 0;
}
