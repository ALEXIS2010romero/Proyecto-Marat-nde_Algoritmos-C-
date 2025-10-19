#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout << "Ingrese una frase: ";
    getline(cin,s);
    int palabras=0;
    bool enPalabra=false;
    for(char c:s){
        if(isspace(c)) enPalabra=false;
        else if(!enPalabra){palabras++; enPalabra=true;}
    }
    cout << "Cantidad de palabras: " << palabras;
}
