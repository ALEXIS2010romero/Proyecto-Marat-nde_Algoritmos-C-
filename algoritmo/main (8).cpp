#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese la cantidad de términos de Fibonacci: ";
    cin >> N;

    int a = 0, b = 1, c;
    cout << "Fibonacci: ";
    for(int i = 1; i <= N; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}
