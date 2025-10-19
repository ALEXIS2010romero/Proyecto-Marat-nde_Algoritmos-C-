#include <iostream>
#include <vector>
using namespace std;

int caminos(int f, int c, vector<vector<int>>& dp){
    if(f == 0 || c == 0) return 1;
    if(dp[f][c] != -1) return dp[f][c];
    return dp[f][c] = caminos(f-1,c,dp) + caminos(f,c-1,dp);
}

int main(){
    int n,m; cin>>n>>m;
    vector<vector<int>> dp(n, vector<int>(m,-1));
    cout << caminos(n-1,m-1,dp);
}
