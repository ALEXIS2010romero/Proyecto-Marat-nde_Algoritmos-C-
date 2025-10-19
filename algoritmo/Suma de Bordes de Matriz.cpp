#include <iostream>
using namespace std;
int main(){
    int f,c; cin >> f >> c;
    int mat[f][c];
    for(int i=0;i<f;i++) for(int j=0;j<c;j++) cin >> mat[i][j];
    int suma=0;
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            if(i==0 || i==f-1 || j==0 || j==c-1) suma += mat[i][j];
        }
    }
    cout << "Suma de bordes: " << suma;
}
