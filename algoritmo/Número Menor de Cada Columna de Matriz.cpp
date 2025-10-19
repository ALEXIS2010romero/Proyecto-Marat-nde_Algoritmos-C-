#include <iostream>
using namespace std;
int main(){
    int f,c; cin >> f >> c;
    int mat[f][c];
    for(int i=0;i<f;i++) for(int j=0;j<c;j++) cin >> mat[i][j];
    for(int j=0;j<c;j++){
        int menor=mat[0][j];
        for(int i=1;i<f;i++) if(mat[i][j]<menor) menor=mat[i][j];
        cout << "Menor columna " << j+1 << ": " << menor << endl;
    }
}
