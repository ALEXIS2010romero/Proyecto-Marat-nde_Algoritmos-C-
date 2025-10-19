#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    bool esPalindromo = true;
    int n = palabra.size();
    for (int i = 0; i < n / 2; i++) {
        if (palabra[i] != palabra[n - i - 1]) {
            esPalindromo = false;
            break;
        }
    }

    if (esPalindromo) cout << "Es palíndromo\n";
    else cout << "No es palíndromo\n";
}
