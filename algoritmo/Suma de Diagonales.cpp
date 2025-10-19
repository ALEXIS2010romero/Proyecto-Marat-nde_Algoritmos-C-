#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int mat[n][n], suma=0;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin >> mat[i][j];
    for(int i=0;i<n;i++){
        suma += mat[i][i];         // diagonal principal
        suma += mat[i][n-1-i];    // diagonal secundaria
    }
    if(n%2!=0) suma -= mat[n/2][n/2]; // evitar duplicado central
    cout << "Suma diagonales: " << suma;
}
