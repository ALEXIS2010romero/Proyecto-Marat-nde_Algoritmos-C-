#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una frase: ";
    getline(cin, texto);
    int consonantes = 0;

    for (char c : texto) {
        c = tolower(c);
        if (isalpha(c) && !(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'))
            consonantes++;
    }

    cout << "Cantidad de consonantes: " << consonantes;
    return 0;
}
