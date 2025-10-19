#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n]; double suma=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        suma += arr[i];
    }
    cout << "Promedio: " << suma/n;
}
