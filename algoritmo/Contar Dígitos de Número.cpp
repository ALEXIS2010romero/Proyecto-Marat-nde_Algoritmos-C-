#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int contador=0;
    if(n==0) contador=1;
    while(n!=0){
        n/=10;
        contador++;
    }
    cout << "Cantidad de dígitos: " << contador;
}
