#include <iostream>
using namespace std;

int main() {
    int inicio, fin;
    cout << "Ingrese el valor inicial: ";
    cin >> inicio;
    cout << "Ingrese el valor final: ";
    cin >> fin;

    cout << "Números pares: ";
    for(int i = inicio; i <= fin; i++) {
        if(i % 2 == 0) cout << i << " ";
    }
    cout << endl;
    return 0;
}





