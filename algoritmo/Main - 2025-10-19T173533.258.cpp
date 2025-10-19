#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamaño de la matriz cuadrada: ";
    cin >> n;
    int m[n][n], suma = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cin >> m[i][j];
            if(i==j) suma += m[i][j];
        }
    cout << "Suma diagonal: " << suma;
}
