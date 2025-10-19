#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
    int pares = 0, impares = 0;
    for (int i = 0; i < n; i++) (arr[i] % 2 == 0) ? pares++ : impares++;
    cout << "Pares: " << pares << ", Impares: " << impares << endl;
}
