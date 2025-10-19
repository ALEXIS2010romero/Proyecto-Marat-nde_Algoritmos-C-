#include <iostream>
using namespace std;
int main(){
    int n,x; cin >> n >> x;
    int arr[n], contador=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>x) contador++;
    }
    cout << "Elementos mayores que " << x << ": " << contador;
}
