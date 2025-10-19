#include <iostream>
using namespace std;

int main() {
    int num, suma = 0;
    cout << "Ingrese números (negativo para terminar): " << endl;

    while(true) {
        cin >> num;
        if(num < 0) break;
        suma += num;
    }

    cout << "La suma de los números ingresados es: " << suma << endl;
    return 0;
}


