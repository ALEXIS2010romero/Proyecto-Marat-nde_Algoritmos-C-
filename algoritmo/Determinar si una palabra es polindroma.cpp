#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){     //Hecho por George Fernando Pelaez Carrera 10MO A
    char cadenaentrada[59];
    char cadenareversa[59];

    cout << "ingresa la palabra que quieras comprobar"<< endl;
    cin.getline(cadenaentrada,59,'\n');

    strlwr(cadenaentrada);

    strcpy(cadenareversa,cadenaentrada);
    strrev(cadenareversa);

    cout << "su reversa es: " << cadenareversa << endl;

    if (strcmp(cadenaentrada,cadenareversa)==0) {
        cout << "si es polindromo" << endl;
    } else {
        cout << "no es polindromo" << endl;
    }

    getch();
    return 0;
}