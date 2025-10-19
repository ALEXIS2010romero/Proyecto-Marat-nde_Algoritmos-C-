#include <iostream>
#include <string>
using namespace std;
int main(){
    string s; char viejo, nuevo;
    getline(cin, s);
    cin >> viejo >> nuevo;
    for(char &c:s) if(c==viejo) c=nuevo;
    cout << "Cadena resultante: " << s;
}
