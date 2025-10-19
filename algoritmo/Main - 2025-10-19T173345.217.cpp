#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos números: ";
    cin >> a >> b;
    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }
    cout << "MCD: " << a;
}
