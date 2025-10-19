#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int mat[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin >> mat[i][j];
    bool simetrica=true;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(mat[i][j] != mat[j][i]) simetrica=false;
    cout << (simetrica ? "Simétrica" : "No simétrica");
}
