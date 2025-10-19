#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamaño: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << "Números pares: ";
    for(int i=0;i<n;i++)
        if(arr[i]%2==0) cout << arr[i] << " ";
}
