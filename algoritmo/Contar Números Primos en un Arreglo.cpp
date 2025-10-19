#include <iostream>
using namespace std;

bool esPrimo(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}

int main(){
    int n; cin >> n;
    int arr[n], contador=0;
    for(int i=0;i<n;i++) cin >> arr[i];
    for(int i=0;i<n;i++) if(esPrimo(arr[i])) contador++;
    cout << "Cantidad de números primos: " << contador;
}
