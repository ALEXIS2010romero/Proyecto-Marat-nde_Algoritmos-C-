#include <iostream>
using namespace std;

int main() {
    int num, contador = 0;
    float suma = 0;

    cout << "Ingrese números (0 para finalizar): " << endl;
    do {
        cin >> num;
        if(num != 0) {
            suma += num;
            contador++;
        }
    } while(num != 0);

    if(contador > 0)
        cout << "Promedio: " << suma / contador << endl;
    else
        cout << "No se ingresaron números válidos." << endl;

    return 0;
}




