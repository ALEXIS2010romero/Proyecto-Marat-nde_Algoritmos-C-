#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    int arr[n];
    double suma = 0;
    for(int i=0;i<n;i++){
        cout << "Elemento " << i+1 << ": ";
        cin >> arr[i];
        suma += arr[i];
    }
    double promedio = suma / n;
    cout << "El promedio es: " << promedio;
}
