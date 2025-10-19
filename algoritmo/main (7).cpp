#include <iostream>
using namespace std;

int main() {
    int N, suma = 0;
    cout << "Ingrese un número N: ";
    cin >> N;

    for(int i = 2; i <= N; i += 2) {
        suma += i;
    }

    cout << "La suma de números pares hasta " << N << " es: " << suma << endl;
    return 0;
}
