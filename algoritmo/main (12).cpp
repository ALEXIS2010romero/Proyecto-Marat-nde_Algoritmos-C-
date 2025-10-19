#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "¿Cuántos números desea ingresar?: ";
    cin >> n;

    int positivos = 0, negativos = 0, ceros = 0;
    float num;

    for(int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> num;

        if(num > 0) positivos++;
        else if(num < 0) negativos++;
        else ceros++;
    }

    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Ceros: " << ceros << endl;
    return 0;
}



