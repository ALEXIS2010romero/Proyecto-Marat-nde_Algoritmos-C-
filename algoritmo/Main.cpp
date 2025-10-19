#include <iostream>
using namespace std;

long factorial(int n) {
    long resultado = 1;
    for(int i = 1; i <= n; i++)
        resultado *= i;
    return resultado;
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    cout << "El factorial de " << num << " es " << factorial(num) << endl;
    return 0;
}
