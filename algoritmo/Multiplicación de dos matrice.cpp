#include <iostream>
using namespace std;

int main() {
    int f1, c1, f2, c2;
    cout << "Filas y columnas de la primera matriz: ";
    cin >> f1 >> c1;
    cout << "Filas y columnas de la segunda matriz: ";
    cin >> f2 >> c2;

    if (c1 != f2) {
        cout << "No se pueden multiplicar";
        return 0;
    }

    int A[f1][c1], B[f2][c2], C[f1][c2];

    cout << "Elementos de la primera matriz:\n";
    for (int i = 0; i < f1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Elementos de la segunda matriz:\n";
    for (int i = 0; i < f2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    for (int i = 0; i < f1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Matriz resultante:\n";
    for (int i = 0; i < f1; i++) {
        for (int j = 0; j < c2; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    return 0;
}
