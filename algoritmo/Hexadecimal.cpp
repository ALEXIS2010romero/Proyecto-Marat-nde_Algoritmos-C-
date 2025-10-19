#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número decimal: ";
    cin >> n;

    string hex = "";
    char hexChars[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    while(n > 0){
        hex = hexChars[n % 16] + hex;
        n /= 16;
    }

    cout << "Hexadecimal: " << (hex.empty() ? "0" : hex) << endl;
    return 0;
}
