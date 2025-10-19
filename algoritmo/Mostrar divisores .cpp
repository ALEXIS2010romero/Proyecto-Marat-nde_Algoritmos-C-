#include <iostream>
using namespace std;
int main() {
    // EjercicioC160: Mostrar divisores de n
    int n;
    cout << "Ingrese n: ";
    if(!(cin >> n)) return 0;
    cout << "Divisores de " << n << ": ";
    for (int i = 1; i <= n; ++i) if (n % i == 0) cout << i << " ";
    cout << endl;
    return 0;
}
