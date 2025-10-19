#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    cin >> n;
    int mat[n][n], suma = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cout << "Elemento ["<<i<<"]["<<j<<"]: ";
            cin >> mat[i][j];
        }
    for(int i=0;i<n;i++) suma += mat[i][i];
    cout << "Suma de la diagonal principal: " << suma;
}
