#include <iostream>
using namespace std;

int main() {
    int n, inv = 0;
    cout << "Número: ";
    cin >> n;
    while(n != 0) {
        inv = inv * 10 + n % 10;
        n /= 10;
    }
    cout << "Invertido: " << inv;
}
