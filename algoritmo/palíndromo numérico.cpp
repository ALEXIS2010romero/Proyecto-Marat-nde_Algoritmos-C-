#include <iostream>
using namespace std;

int main() {
    int num, original, invertido = 0;
    cout << "Ingrese un numero: ";
    cin >> num;
    original = num;

    while (num != 0) {
        invertido = invertido * 10 + (num % 10);
        num /= 10;
    }

    if (original == invertido) cout << "Es capicua";
    else cout << "No es capicua";
    return 0;
}
