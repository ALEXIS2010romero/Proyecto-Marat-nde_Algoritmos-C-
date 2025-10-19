#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    char tipo;
    int contador = 0;

    cout << "Ingrese un texto: ";
    cin.ignore();
    getline(cin, texto);
    cout << "Ingrese el carácter a contar: ";
    cin >> tipo;

    for(int i = 0; i < texto.length(); i++) {
        if(texto[i] == tipo) contador++;
    }

    cout << "El carácter '" << tipo << "' aparece " << contador << " veces." << endl;
    return 0;
}




