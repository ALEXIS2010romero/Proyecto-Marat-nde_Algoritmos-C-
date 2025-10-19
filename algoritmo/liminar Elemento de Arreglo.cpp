#include <iostream>
using namespace std;
int main(){
    int n, eliminar; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << "Elemento a eliminar: "; cin >> eliminar;
    int nuevo[n], k=0;
    bool eliminado=false;
    for(int i=0;i<n;i++){
        if(arr[i]==eliminar && !eliminado){eliminado=true; continue;}
        nuevo[k++]=arr[i];
    }
    for(int i=0;i<k;i++) cout << nuevo[i] << " ";
}
