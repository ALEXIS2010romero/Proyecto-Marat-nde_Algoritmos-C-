#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    int menor=arr[0], segundo=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<menor){segundo=menor; menor=arr[i];}
        else if(arr[i]<segundo && arr[i]!=menor) segundo=arr[i];
    }
    cout << "Segundo menor: " << segundo;
}
