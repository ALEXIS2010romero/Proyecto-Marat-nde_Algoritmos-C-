#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Ingrese una letra: ";
    cin >> c;
    c = tolower(c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        cout << "Es vocal";
    else
        cout << "Es consonante";
}
