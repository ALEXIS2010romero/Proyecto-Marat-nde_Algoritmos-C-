#include <iostream>
using namespace std;
int main() {
    // EjercicioC159: Contar multiplos de 3 entre 1 y n
    int n;
    cout << "Ingrese n: ";
    if(!(cin >> n)) return 0;
    int contador = 0;
    for (int i = 1; i <= n; ++i) if (i % 3 == 0) ++contador;
    cout << "Multiplos de 3 = " << contador << endl;
    return 0;
}
