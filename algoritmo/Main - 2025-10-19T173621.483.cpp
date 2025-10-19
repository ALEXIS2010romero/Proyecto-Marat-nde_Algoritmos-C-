#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Ingrese A y B: ";
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << "A=" << a << " B=" << b;
}
