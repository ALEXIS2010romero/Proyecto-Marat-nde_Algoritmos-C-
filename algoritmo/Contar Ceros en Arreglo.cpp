#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n], ceros=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==0) ceros++;
    }
    cout << "Cantidad de ceros: " << ceros;
}
