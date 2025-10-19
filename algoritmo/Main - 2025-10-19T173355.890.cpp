#include <iostream>
using namespace std;

int main() {
    int a, b, mcm;
    cout << "Ingrese dos números: ";
    cin >> a >> b;
    int x = a, y = b;
    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }
    mcm = (x * y) / a;
    cout << "MCM: " << mcm;
}
