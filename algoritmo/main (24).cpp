#include <iostream>
using namespace std;

int main() {
    int num, invertido = 0;
    cout << "Ingrese un número: ";
    cin >> num;

    int n = abs(num);
    while(n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }

    if(num < 0) invertido = -invertido;

    cout << "Número invertido: " << invertido << endl;
    return 0;
}




