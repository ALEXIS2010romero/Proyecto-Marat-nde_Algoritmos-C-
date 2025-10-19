#include <iostream>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

int main() {
    Estudiante e;

    cout << "Ingrese nombre: ";
    getline(cin, e.nombre);
    cout << "Ingrese edad: ";
    cin >> e.edad;
    cout << "Ingrese promedio: ";
    cin >> e.promedio;

    cout << "\n--- Datos del Estudiante ---\n";
    cout << "Nombre: " << e.nombre << endl;
    cout << "Edad: " << e.edad << endl;
    cout << "Promedio: " << e.promedio << endl;

    return 0;
}
