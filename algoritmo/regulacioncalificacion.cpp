#include <iostream>
using namespace std;

int main() {
    float nota;

    // Entrada de datos
    cout << "Ingrese la nota del estudiante (0 a 10): ";
    cin >> nota;

    // Proceso: determinar calificación
    if (nota >= 9 && nota <= 10) {
        cout << "Aprobado con Excelente." << endl;
    } else if (nota >= 7) {
        cout << "Aprobado con Bueno." << endl;
    } else if (nota >= 5) {
        cout << "Aprobado con Regular." << endl;
    } else if (nota >= 0) {
        cout << "Reprobado." << endl;
    } else {
        cout << "Nota no válida. Debe estar entre 0 y 10." << endl;
    }

    return 0;
}
