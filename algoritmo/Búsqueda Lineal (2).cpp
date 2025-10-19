#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Cantidad de elementos: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Elemento " << i+1 << ": ";
        cin >> arr[i];
    }
    int buscar;
    cout << "Número a buscar: ";
    cin >> buscar;
    int pos = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == buscar){
            pos = i;
            break;
        }
    }
    if(pos != -1) cout << "Número encontrado en la posición " << pos;
    else cout << "Número no encontrado";
}
