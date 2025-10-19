#include <iostream>
using namespace std;

int main() {
    int m[3][3], suma = 0;
    cout << "Ingrese los elementos de la matriz 3x3:\n";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++){
            cin >> m[i][j];
            suma += m[i][j];
        }
    cout << "Suma total: " << suma;
}
