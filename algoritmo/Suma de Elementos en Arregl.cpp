#include <iostream>
using namespace std;
int main(){
    int n, suma=0; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        suma += arr[i];
    }
    cout << "Suma total: " << suma;
}
