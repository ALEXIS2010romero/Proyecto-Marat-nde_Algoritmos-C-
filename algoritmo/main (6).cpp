#include <iostream>
using namespace std;

int main() {
    int contador = 0;

    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0)
            contador++;
    }

    cout << "Cantidad de números pares entre 1 y 100: " << contador << endl;
    return 0;
}
