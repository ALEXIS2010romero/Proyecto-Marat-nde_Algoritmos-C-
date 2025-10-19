#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n], suma=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(i%2!=0) suma += arr[i];
    }
    cout << "Suma elementos en posiciones impares: " << suma;
}
