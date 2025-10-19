#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    int arr[n], positivos=0, negativos=0, ceros=0;
    for(int i=0;i<n;i++){
        cout << "Elemento " << i+1 << ": ";
        cin >> arr[i];
        if(arr[i] > 0) positivos++;
        else if(arr[i] < 0) negativos++;
        else ceros++;
    }
    cout << "Positivos: " << positivos << ", Negativos: " << negativos << ", Ceros: " << ceros;
}
