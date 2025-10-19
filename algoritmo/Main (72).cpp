
#include <iostream>
using namespace std;

struct Estudiante {
    string nombre;
    float nota;
};

int main() {
    int n;
    cout << "Ingrese el número de estudiantes: ";
    cin >> n;
    Estudiante est[n];
    float suma = 0;

    for(int i = 0; i < n; i++) {
        cout << "Nombre del estudiante " << i + 1 << ": ";
        cin >> est[i].nombre;
        cout << "Nota: ";
        cin >> est[i].nota;
        suma += est[i].nota;
    }

    cout << "Promedio general: " << suma / n << endl;
    return 0;
}
