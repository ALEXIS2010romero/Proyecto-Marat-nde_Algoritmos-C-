#include <iostream>
using namespace std;
int main(){
    int f,c;
    cin >> f >> c;
    int A[f][c], B[f][c], C[f][c];
    for(int i=0;i<f;i++) for(int j=0;j<c;j++) cin >> A[i][j];
    for(int i=0;i<f;i++) for(int j=0;j<c;j++) cin >> B[i][j];
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
