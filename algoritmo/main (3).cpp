#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;
    cout << "Ingrese un número N: ";
    cin >> N;

    for(int i = 1; i <= N; i++) {
        suma += i;
    }

    cout << "La suma de 1 a " << N << " es: " << suma << endl;
    return 0;
}


