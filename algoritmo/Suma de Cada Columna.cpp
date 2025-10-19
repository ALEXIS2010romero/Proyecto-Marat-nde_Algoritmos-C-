#include <iostream>
using namespace std;
int main(){
    int f,c; cin >> f >> c;
    int mat[f][c];
    for(int i=0;i<f;i++) for(int j=0;j<c;j++) cin >> mat[i][j];
    for(int j=0;j<c;j++){
        int suma=0;
        for(int i=0;i<f;i++) suma += mat[i][j];
        cout << "Columna " << j+1 << ": " << suma << endl;
    }
}
