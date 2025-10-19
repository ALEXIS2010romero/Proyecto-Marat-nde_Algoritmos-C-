#include <iostream>
using namespace std;

int main() {
    int seg;
    cout << "Ingrese segundos: ";
    cin >> seg;
    int h = seg / 3600;
    int m = (seg % 3600) / 60;
    int s = seg % 60;
    cout << h << "h " << m << "m " << s << "s";
}
