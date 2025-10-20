#include <iostream>
using namespace std;
int main(){
    int n, original; cin >> n;
    original = n;
    int inverso=0;
    while(n!=0){
        inverso = inverso*10 + n%10;
        n/=10;
    }
    if(original==inverso) cout << "Número capicúa";
    else cout << "No es capicúa";
}
