#include <iostream>
#include <string>
using namespace std;

string invertir(string s){
    if(s.size()<=1) return s;
    return invertir(s.substr(1)) + s[0];
}

int main(){
    string s; cin>>s;
    cout<<invertir(s);
}
