#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra, inversa = "";
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    for(int i = palabra.length() - 1; i >= 0; i--) {
        inversa += palabra[i];
    }

    if(palabra == inversa)
        cout << "Es un palíndromo." << endl;
    else
        cout << "No es un palíndromo." << endl;

    return 0;
}
