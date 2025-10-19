#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int inverso=0;
    while(n!=0){
        inverso = inverso*10 + n%10;
        n/=10;
    }
    cout << "Número invertido: " << inverso;
}
