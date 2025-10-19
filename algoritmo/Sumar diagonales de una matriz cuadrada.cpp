#include <iostream>
using namespace std;

int main() {
    int n, x, contador = 0;
    cout << "Tamaño del arreglo: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Numero a buscar: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) contador++;
    }

    cout << "El numero aparece " << contador << " veces";
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Tamaño de la matriz cuadrada: ";
    cin >> n;
    int matriz[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matriz[i][j];

    int sumaPrincipal = 0, sumaSecundaria = 0;
    for (int i = 0; i < n; i++) {
        sumaPrincipal += matriz[i][i];
        sumaSecundaria += matriz[i][n - 1 - i];
    }

    cout << "Suma diagonal principal: " << sumaPrincipal << endl;
    cout << "Suma diagonal secundaria: " << sumaSecundaria << endl;
    return 0;
}
