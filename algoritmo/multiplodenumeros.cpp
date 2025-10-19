#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;

    if (b != 0 && a % b == 0)
        cout << a << " es múltiplo de " << b << endl;
    else
        cout << a << " no es múltiplo de " << b << endl;

    return 0;
}
