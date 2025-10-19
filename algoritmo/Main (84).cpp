#include <iostream>
using namespace std;

int main() {
    int base, exp, res = 1;
    cout << "Base: ";
    cin >> base;
    cout << "Exponente: ";
    cin >> exp;

    for(int i = 0; i < exp; i++) res *= base;

    cout << "Resultado: " << res << endl;
    return 0;
}
