#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int mat[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) cin >> mat[i][j];

    int principal=0, secundaria=0;
    for(int i=0;i<n;i++){
        principal += mat[i][i];
        secundaria += mat[i][n-1-i];
    }
    cout<<"Diagonal principal: "<<principal<<endl;
    cout<<"Diagonal secundaria: "<<secundaria<<endl;
}
