#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int maxActual=arr[0], maxGlobal=arr[0];
    for(int i=1;i<n;i++){
        maxActual = max(arr[i], maxActual + arr[i]);
        maxGlobal = max(maxGlobal, maxActual);
    }
    cout << maxGlobal;
}
