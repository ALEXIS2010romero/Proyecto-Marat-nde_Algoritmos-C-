#include <iostream>
using namespace std;
int main() {
    // EjercicioC155: Tabla de multiplicar de n (1..10)
    int n;
    cout << "Ingrese el numero de la tabla: ";
    if(!(cin >> n)) return 0;
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
