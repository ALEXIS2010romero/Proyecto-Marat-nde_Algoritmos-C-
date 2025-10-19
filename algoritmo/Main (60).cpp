#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0;

    for(int i = 1; i <= 5; i++) {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    cout << "Promedio de notas: " << suma / 5 << endl;
    return 0;
}





