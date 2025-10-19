#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    if (num >= 1 && num <= 100)
        cout << "El número está dentro del rango [1,100]." << endl;
    else
        cout << "El número está fuera del rango." << endl;

    return 0;
}

