#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    cout << "Ingrese los elementos de la matriz:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> matriz[i][j];

    cout << "Diagonal secundaria: ";
    for(int i = 0; i < 3; i++)
        cout << matriz[i][2 - i] << " ";
    cout << endl;
    return 0;
}
