#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    if(num < 0)
        num = -num;

    cout << "El valor absoluto es: " << num << endl;
    return 0;
}

