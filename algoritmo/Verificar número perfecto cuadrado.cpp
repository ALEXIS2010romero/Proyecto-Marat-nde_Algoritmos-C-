#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    int raiz = sqrt(num);
    if (raiz * raiz == num) cout << "Es un cuadrado perfecto";
    else cout << "No es cuadrado perfecto";
    return 0;
}
