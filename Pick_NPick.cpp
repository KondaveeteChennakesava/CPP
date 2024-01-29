#include<bits/stdc++.h>
using namespace std;

void combinationalSum(int ind,int arr[],int n,int k,vector<int>&ans){
    // base case
    if(ind == n){
        if(k == 0){
            for(auto it: ans){
                cout << it << ' ';
            }
            cout << '\n';
        }
        return;
    }
    // recursive case

    // pick case
    if(arr[ind] <= k){
        ans.push_back(arr[ind]);
        combinationalSum(ind,arr,n,k-arr[ind],ans);
        ans.pop_back();
    }

    // not pick case
    combinationalSum(ind+1,arr,n,k,ans);
}

int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)cin >> arr[i];
    vector<int>ans;
    combinationalSum(0,arr,n,k,ans);
}