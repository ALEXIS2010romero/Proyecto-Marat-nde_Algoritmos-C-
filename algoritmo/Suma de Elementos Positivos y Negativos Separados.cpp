#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n], sumaPos=0, sumaNeg=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]>0) sumaPos+=arr[i];
        else if(arr[i]<0) sumaNeg+=arr[i];
    }
    cout << "Suma positivos: " << sumaPos << ", Suma negativos: " << sumaNeg;
}

