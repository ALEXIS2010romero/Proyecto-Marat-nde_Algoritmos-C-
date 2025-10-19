#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamaño: ";
    cin >> n;
    int arr[n], mayor;
    for(int i = 0; i < n; i++) cin >> arr[i];
    mayor = arr[0];
    for(int i = 1; i < n; i++)
        if(arr[i] > mayor) mayor = arr[i];
    cout << "El mayor es: " << mayor;
}
