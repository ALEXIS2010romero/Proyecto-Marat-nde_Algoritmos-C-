#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una palabra: ";
    getline(cin, texto);

    int n = texto.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = texto[i];
        texto[i] = texto[n - i - 1];
        texto[n - i - 1] = temp;
    }

    cout << "Cadena invertida: " << texto;
    return 0;
}
