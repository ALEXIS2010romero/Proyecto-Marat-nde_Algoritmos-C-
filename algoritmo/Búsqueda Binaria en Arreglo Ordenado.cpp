#include <iostream>
#include <vector>
using namespace std;

int busquedaBinaria(vector<int>& arr, int l, int r, int x){
    if(l>r) return -1;
    int m=(l+r)/2;
    if(arr[m]==x) return m;
    if(arr[m]<x) return busquedaBinaria(arr,m+1,r,x);
    return busquedaBinaria(arr,l,m-1,x);
}

int main(){
    int n,x; cin>>n;
    vector<int> arr(n); for(int i=0;i<n;i++) cin>>arr[i];
    cin>>x;
    cout<<busquedaBinaria(arr,0,n-1,x);
}
