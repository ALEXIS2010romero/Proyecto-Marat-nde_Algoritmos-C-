#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;
    if(a % b == 0)
        cout << a << " es múltiplo de " << b;
    else
        cout << a << " no es múltiplo de " << b;
}

