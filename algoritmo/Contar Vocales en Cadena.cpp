#include <iostream>
#include <string>
using namespace std;
int main(){
    string s; getline(cin, s);
    int vocales=0;
    for(char c:s){
        c = tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vocales++;
    }
    cout << "Cantidad de vocales: " << vocales;
}
