#include <iostream>
using namespace std;
int main() {
    int f, c; cin >> f >> c;
    int mat[f][c];
    for(int i=0;i<f;i++)
        for(int j=0;j<c;j++) cin >> mat[i][j];

    for(int i=0;i<f;i++){
        int sumaFila=0;
        for(int j=0;j<c;j++) sumaFila += mat[i][j];
        cout<<"Suma fila "<<i<<": "<<sumaFila<<endl;
    }

    for(int j=0;j<c;j++){
        int sumaCol=0;
        for(int i=0;i<f;i++) sumaCol += mat[i][j];
        cout<<"Suma columna "<<j<<": "<<sumaCol<<endl;
    }
}
