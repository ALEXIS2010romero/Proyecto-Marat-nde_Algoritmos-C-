#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    cout << "Ingrese filas y columnas: ";
    cin >> filas >> columnas;

    int matriz[filas][columnas];
    cout << "Ingrese elementos:\n";
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            cin >> matriz[i][j];

    cout << "Matriz transpuesta:\n";
    for (int j = 0; j < columnas; j++) {
        for (int i = 0; i < filas; i++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
