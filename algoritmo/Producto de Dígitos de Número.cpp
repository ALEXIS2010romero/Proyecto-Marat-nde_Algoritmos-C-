#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int producto=1;
    while(n!=0){
        producto *= n%10;
        n/=10;
    }
    cout << "Producto de dígitos: " << producto;
}
