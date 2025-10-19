#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    int original = n, suma = 0;
    int digitos = to_string(n).size();
    while(n > 0){
        int dig = n % 10;
        suma += pow(dig, digitos);
        n /= 10;
    }
    if(suma == original) cout << "Número Armstrong";
    else cout << "No es Armstrong";
}
