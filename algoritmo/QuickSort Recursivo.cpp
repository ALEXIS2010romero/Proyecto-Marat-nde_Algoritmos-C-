#include <iostream>
using namespace std;
void quickSort(int arr[],int l,int r){
    int i=l,j=r,piv=arr[(l+r)/2];
    while(i<=j){
        while(arr[i]<piv) i++;
        while(arr[j]>piv) j--;
        if(i<=j) swap(arr[i++],arr[j--]);
    }
    if(l<j) quickSort(arr,l,j);
    if(i<r) quickSort(arr,i,r);
}
int main(){
    int n; cin >> n;
    int arr[n]; for(int i=0;i<n;i++) cin >> arr[i];
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
