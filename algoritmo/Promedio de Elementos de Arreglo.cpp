#include <iostream>
using namespace std;
int main() {
    int n; cin>>n; int arr[n]; double s=0;
    for(int i=0;i<n;i++){cin>>arr[i]; s+=arr[i];}
    cout<<s/n;
}
