#include <iostream>
using namespace std;

int main() {
    int num, contador = 0;
    cout << "Ingrese un número entero: ";
    cin >> num;

    int n = abs(num); // manejar negativos
    do {
        n /= 10;
        contador++;
    } while(n > 0);

    cout << "El número tiene " << contador << " dígitos." << endl;
    return 0;
}




