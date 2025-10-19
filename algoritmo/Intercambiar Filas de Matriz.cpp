#include <iostream>
using namespace std;
int main(){
    int f,c, fila1, fila2; cin >> f >> c >> fila1 >> fila2;
    int mat[f][c];
    for(int i=0;i<f;i++) for(int j=0;j<c;j++) cin >> mat[i][j];
    for(int j=0;j<c;j++) swap(mat[fila1][j], mat[fila2][j]);
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++) cout << mat[i][j] << " ";
        cout << endl;
    }
}
