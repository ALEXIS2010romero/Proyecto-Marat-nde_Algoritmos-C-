#include <iostream>
using namespace std;
int main(){
    int n,k; cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    k %= n;
    int temp[k];
    for(int i=0;i<k;i++) temp[i]=arr[n-k+i];
    for(int i=n-1;i>=k;i--) arr[i]=arr[i-k];
    for(int i=0;i<k;i++) arr[i]=temp[i];
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}
