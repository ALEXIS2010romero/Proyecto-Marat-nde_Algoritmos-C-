#include <iostream>
#include <string>
using namespace std;
int main(){
    string s; 
    cout << "Ingrese una cadena: ";
    getline(cin,s);
    int vocales=0, consonantes=0;
    for(char c:s){
        c = tolower(c);
        if(c>='a' && c<='z'){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vocales++;
            else consonantes++;
        }
    }
    cout << "Vocales: " << vocales << ", Consonantes: " << consonantes;
}
