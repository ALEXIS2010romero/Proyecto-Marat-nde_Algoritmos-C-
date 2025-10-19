#include <iostream>
#include <string>
using namespace std;

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    int palabras = 0;
    bool enPalabra = false;

    for (char c : frase) {
        if (isspace(c)) enPalabra = false;
        else if (!enPalabra) {
            enPalabra = true;
            palabras++;
        }
    }

    cout << "Cantidad de palabras: " << palabras;
    return 0;
}
