#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    bool ordenado=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){ordenado=false; break;}
    }
    cout << (ordenado?"Arreglo ordenado":"Arreglo no ordenado");
}
