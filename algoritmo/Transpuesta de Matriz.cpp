#include <iostream>
using namespace std;
int main(){
    int f,c; cin >> f >> c;
    int mat[f][c];
    for(int i=0;i<f;i++) for(int j=0;j<c;j++) cin >> mat[i][j];
    for(int j=0;j<c;j++){
        for(int i=0;i<f;i++) cout << mat[i][j] << " ";
        cout << endl;
    }
}
