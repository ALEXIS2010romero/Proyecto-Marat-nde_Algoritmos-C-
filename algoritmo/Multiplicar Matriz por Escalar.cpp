#include <iostream>
using namespace std;
int main(){
    int f,c, escalar;
    cin >> f >> c >> escalar;
    int mat[f][c];
    for(int i=0;i<f;i++) for(int j=0;j<c;j++) cin >> mat[i][j];
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            mat[i][j]*=escalar;
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
