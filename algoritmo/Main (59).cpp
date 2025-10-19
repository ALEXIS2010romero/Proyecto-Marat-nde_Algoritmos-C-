#include <iostream>
using namespace std;

int main() {
    int n, positivos = 0, negativos = 0;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> arr[i];
        if(arr[i] > 0) positivos++;
        else if(arr[i] < 0) negativos++;
    }

    cout << "Positivos: " << positivos << ", Negativos: " << negativos << endl;
    return 0;
}




