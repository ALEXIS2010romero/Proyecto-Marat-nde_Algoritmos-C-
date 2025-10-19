#include <iostream>
using namespace std;
int main(){
    int f,c; 
    cout << "Filas y columnas: "; cin >> f >> c;
    int mat[f][c];
    for(int i=0;i<f;i++) for(int j=0;j<c;j++) cin >> mat[i][j];
    for(int i=0;i<f;i++){
        int mayor=mat[i][0];
        for(int j=1;j<c;j++) if(mat[i][j]>mayor) mayor=mat[i][j];
        cout << "Mayor fila " << i+1 << ": " << mayor << endl;
    }
}
