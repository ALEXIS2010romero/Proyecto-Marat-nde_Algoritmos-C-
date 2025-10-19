#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el número de términos de la serie de Fibonacci: ";
    cin >> n;

    long long t1 = 0, t2 = 1, siguiente;

    cout << "Serie de Fibonacci: ";
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << t1 << " ";
            continue;
        }
        if (i == 2) {
            cout << t2 << " ";
            continue;
        }
        siguiente = t1 + t2;
        cout << siguiente << " ";
        t1 = t2;
        t2 = siguiente;
    }

    cout << endl;
    return 0;
}
