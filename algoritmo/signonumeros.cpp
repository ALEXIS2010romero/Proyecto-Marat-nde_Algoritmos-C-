#include <iostream>
using namespace std;

int main() {
    float num;
    cout << "Ingrese un número: ";
    cin >> num;

    string signo = (num > 0) ? "positivo" : (num < 0) ? "negativo" : "cero";
    cout << "El número es " << signo << "." << endl;

    return 0;
}

