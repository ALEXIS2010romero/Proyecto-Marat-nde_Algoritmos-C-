#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Número: ";
    cin >> n;
    if(n < 0) n *= -1;
    cout << "Valor absoluto: " << n;
}
