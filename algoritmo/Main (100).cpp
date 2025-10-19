#include <iostream>
using namespace std;

int suma(int arr[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) total += arr[i];
    return total;
}

int main() {
    int n;
    cout << "Tamaño: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "Suma total: " << suma(arr, n);
}
