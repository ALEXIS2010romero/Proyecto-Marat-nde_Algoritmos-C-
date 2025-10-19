#include <iostream>
using namespace std;
int main(){
    int n, suma=0, cont=0;
    cout << "Cantidad de elementos: "; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>0){suma+=arr[i]; cont++;}
    }
    if(cont>0) cout << "Promedio de positivos: " << (double)suma/cont;
    else cout << "No hay números positivos";
}
