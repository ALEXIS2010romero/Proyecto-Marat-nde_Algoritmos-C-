#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
    char palabra[99];
    cout << "\ningresa la palabra\n" << endl;

    cin.getline(palabra,99,'\n');

    strrev(palabra);
    cout << "\nReversa" << endl;
    cout << "\n" << palabra << "\n";
    getch();
    return 0;
}