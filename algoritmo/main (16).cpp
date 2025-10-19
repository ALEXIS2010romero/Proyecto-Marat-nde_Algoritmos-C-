#include <iostream>
using namespace std;

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++) {
        cout << "Ingrese número " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Arreglo en orden inverso: ";
    for(int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}




