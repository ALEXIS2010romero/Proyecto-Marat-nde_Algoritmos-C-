#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n], pares=0, impares=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]%2==0) pares++;
        else impares++;
    }
    cout << "Pares: " << pares << ", Impares: " << impares;
}
