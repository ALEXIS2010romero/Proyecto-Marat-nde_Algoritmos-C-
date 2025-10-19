#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Ingrese un número: ";
    cin >> n;
    int original = n, invertido = 0;
    while(n > 0){
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }
    if(original == invertido) cout << "El número es capicúa";
    else cout << "El número no es capicúa";
}
