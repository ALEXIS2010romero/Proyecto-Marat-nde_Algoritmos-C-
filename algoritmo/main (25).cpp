#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;
    cout << "Ingrese un número: ";
    cin >> n;

    for(int i = 1; i < n; i++) {
        if(n % i == 0) suma += i;
    }

    if(suma == n) cout << n << " es un número perfecto." << endl;
    else cout << n << " no es perfecto." << endl;

    return 0;
}




