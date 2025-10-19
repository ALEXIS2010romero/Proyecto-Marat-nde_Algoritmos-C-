#include <iostream>
using namespace std;

float promedio(int arr[], int n) {
    float suma = 0;
    for(int i = 0; i < n; i++) suma += arr[i];
    return suma / n;
}

int main() {
    int n;
    cout << "Cantidad: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "Promedio: " << promedio(arr, n);
}
