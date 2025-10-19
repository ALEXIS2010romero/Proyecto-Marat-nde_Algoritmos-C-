#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    string palabra = "", masLarga = "";
    for (int i = 0; i <= frase.size(); i++) {
        if (frase[i] == ' ' || i == frase.size()) {
            if (palabra.size() > masLarga.size()) masLarga = palabra;
            palabra = "";
        } else {
            palabra += frase[i];
        }
    }

    cout << "La palabra mas larga es: " << masLarga;
    return 0;
}
