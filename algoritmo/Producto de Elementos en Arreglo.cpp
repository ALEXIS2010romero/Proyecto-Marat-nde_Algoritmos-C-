#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n]; long long producto=1;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        producto *= arr[i];
    }
    cout << "Producto total: " << producto;
}

