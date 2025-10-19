
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Número: ";
    cin >> n;
    cout << "Divisores: ";
    for(int i = 1; i <= n; i++)
        if(n % i == 0) cout << i << " ";
}
