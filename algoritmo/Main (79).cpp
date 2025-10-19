#include <iostream>
using namespace std;

int main() {
    int A[3][3], B[3][3], C[3][3];

    cout << "Ingrese los elementos de la matriz A:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> A[i][j];

    cout << "Ingrese los elementos de la matriz B:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> B[i][j];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];

    cout << "Matriz resultante:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
    return 0;
}
