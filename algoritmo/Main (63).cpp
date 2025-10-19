#include <iostream>
using namespace std;

int main() {
    float horas, pagoHora, total;

    cout << "Ingrese horas trabajadas: ";
    cin >> horas;
    cout << "Ingrese pago por hora: ";
    cin >> pagoHora;

    if(horas > 40)
        total = (40 * pagoHora) + ((horas - 40) * pagoHora * 1.5);
    else
        total = horas * pagoHora;

    cout << "El sueldo total es: $" << total << endl;
    return 0;
}
