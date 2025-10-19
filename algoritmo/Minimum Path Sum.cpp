#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int min,max; cin>>min>>max;
    srand(time(0));
    cout<<(rand()%(max-min+1)+min);
}
