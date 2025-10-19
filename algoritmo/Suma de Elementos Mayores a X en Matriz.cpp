#include <iostream>
using namespace std;
int main(){
    int f,c,x; cin >> f >> c >> x;
    int mat[f][c], suma=0;
    for(int i=0;i<f;i++) for(int j=0;j<c;j++){cin >> mat[i][j]; if(mat[i][j]>x) suma+=mat[i][j];}
    cout << "Suma de elementos mayores a " << x << ": " << suma;
}
