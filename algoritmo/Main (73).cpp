#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream archivo("datos.txt");
    string texto;

    cout << "Ingrese un texto para guardar en el archivo: ";
    cin.ignore();
    getline(cin, texto);

    archivo << texto;
    archivo.close();

    cout << "Texto guardado en 'datos.txt'." << endl;

    // Leer el archivo
    ifstream leer("datos.txt");
    string contenido;
    getline(leer, contenido);
    cout << "Contenido del archivo: " << contenido << endl;
    leer.close();

    return 0;
}
