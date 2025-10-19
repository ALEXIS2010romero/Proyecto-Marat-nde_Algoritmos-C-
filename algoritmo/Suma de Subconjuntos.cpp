#include <iostream>
#include <vector>
using namespace std;

void subsetSum(vector<int>& arr, int i, int sum, int target, vector<int>& curr){
    if(sum == target){
        for(int x: curr) cout<<x<<" "; cout<<endl;
        return;
    }
    if(i == arr.size() || sum > target) return;

    curr.push_back(arr[i]);
    subsetSum(arr,i+1,sum+arr[i],target,curr);
    curr.pop_back();
    subsetSum(arr,i+1,sum,target,curr);
}

int main(){
    int n,target; cin>>n;
    vector<int> arr(n); for(int i=0;i<n;i++) cin>>arr[i];
    cin>>target;
    vector<int> curr;
    subsetSum(arr,0,0,target,curr);
}
