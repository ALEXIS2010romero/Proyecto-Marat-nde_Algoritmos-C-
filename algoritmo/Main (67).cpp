#include <iostream>
using namespace std;

int main() {
    int num, contador = 0;
    cout << "Ingrese un número entero: ";
    cin >> num;

    if(num == 0) contador = 1;
    else {
        while(num != 0) {
            num /= 10;
            contador++;
        }
    }

    cout << "El número tiene " << contador << " cifras." << endl;
    return 0;
}


