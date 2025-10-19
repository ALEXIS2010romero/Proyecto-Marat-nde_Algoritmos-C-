#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num;
    cout << "Ingrese un número: ";
    cin >> num;

    cout << "Cuadrado: " << pow(num, 2) << endl;
    cout << "Cubo: " << pow(num, 3) << endl;
    return 0;
}

