#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    vector<int> unico;
    for(int i=0;i<n;i++){
        bool existe=false;
        for(int j=0;j<unico.size();j++) if(arr[i]==unico[j]){existe=true; break;}
        if(!existe) unico.push_back(arr[i]);
    }
    for(int x:unico) cout << x << " ";
}
