#include <iostream>
using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main() {
    int n;
    cout << "Cantidad de personas: ";
    cin >> n;
    Persona p[n];
    int suma = 0;

    for(int i = 0; i < n; i++) {
        cout << "Nombre: ";
        cin >> p[i].nombre;
        cout << "Edad: ";
        cin >> p[i].edad;
        suma += p[i].edad;
    }

    cout << "Promedio de edades: " << suma / n << endl;
    return 0;
}
