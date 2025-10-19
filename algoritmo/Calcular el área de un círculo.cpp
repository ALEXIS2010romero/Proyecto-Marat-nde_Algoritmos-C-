#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radio, area;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    if (radio <= 0) {
        cout << "Error: el radio debe ser positivo." << endl;
        return 1;
    }

    area = M_PI * pow(radio, 2);
    cout << "El área del círculo es: " << area << endl;
    return 0;
}
