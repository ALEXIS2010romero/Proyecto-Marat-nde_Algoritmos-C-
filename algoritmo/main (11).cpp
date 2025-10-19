#include <iostream>
using namespace std;

int main() {
    float numeros[10], mayor, menor;

    for(int i = 0; i < 10; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    mayor = menor = numeros[0];
    for(int i = 1; i < 10; i++) {
        if(numeros[i] > mayor) mayor = numeros[i];
        if(numeros[i] < menor) menor = numeros[i];
    }

    cout << "Mayor: " << mayor << "\nMenor: " << menor << endl;
    return 0;
}


