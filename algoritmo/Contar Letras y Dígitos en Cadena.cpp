#include <iostream>
#include <string>
using namespace std;
int main(){
    string s; 
    cout << "Ingrese una cadena: ";
    getline(cin,s);
    int letras=0, digitos=0;
    for(char c:s){
        if(isalpha(c)) letras++;
        else if(isdigit(c)) digitos++;
    }
    cout << "Letras: " << letras << ", Dígitos: " << digitos;
}
