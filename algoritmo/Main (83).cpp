#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    cout << "Números primos del 1 al 100:\n";
    for(int i = 1; i <= 100; i++) {
        if(esPrimo(i)) cout << i << " ";
    }
    cout << endl;
    return 0;
}
