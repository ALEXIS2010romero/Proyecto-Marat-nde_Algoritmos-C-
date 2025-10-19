#include <iostream>
using namespace std;
int main(){
    int f,c, contador=0; cin >> f >> c;
    int mat[f][c];
    for(int i=0;i<f;i++) for(int j=0;j<c;j++){cin >> mat[i][j]; if(mat[i][j]<0) contador++;}
    cout << "Cantidad de elementos negativos: " << contador;
}
