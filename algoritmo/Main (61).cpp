#include <iostream>
using namespace std;

int main() {
    int año;
    cout << "Ingrese un año: ";
    cin >> año;

    if((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0))
        cout << año << " es bisiesto." << endl;
    else
        cout << año << " no es bisiesto." << endl;

    return 0;
}






