#include <iostream>
#include <sstream>
using namespace std;
int main(){
    string s; getline(cin, s);
    stringstream ss(s);
    string palabra;
    int contador=0;
    while(ss >> palabra) contador++;
    cout << "Número de palabras: " << contador;
}
