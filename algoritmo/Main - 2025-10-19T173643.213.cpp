#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    char letra;
    cout << "Palabra: ";
    cin >> palabra;
    cout << "Letra a buscar: ";
    cin >> letra;

    if(palabra.find(letra) != string::npos)
        cout << "Sí contiene la letra.";
    else
        cout << "No la contiene.";
}
