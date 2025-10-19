#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese un número: ";
    cin >> n;

    for(int i = 1; i <= n; i += 2)
        suma += i;

    cout << "Suma de los impares: " << suma << endl;
    return 0;
}
