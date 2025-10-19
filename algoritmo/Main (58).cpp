#include <iostream>
using namespace std;

bool esPar(int n) {
    return n % 2 == 0;
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    if(esPar(num))
        cout << num << " es par." << endl;
    else
        cout << num << " es impar." << endl;

    return 0;
}


