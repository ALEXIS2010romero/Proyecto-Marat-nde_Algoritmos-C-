#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int mat[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin >> mat[i][j];
    int suma=0;
    for(int i=0;i<n;i++) suma += mat[i][n-1-i];
    cout << "Suma diagonal secundaria: " << suma;
}
