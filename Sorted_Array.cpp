#include<bits/stdc++.h>
using namespace std;

bool sortedArray(int *arr,int n){
    if(n == 0 || n == 1)return true;
    if(arr[0] > arr[1])return false;
    bool smallAns = sortedArray(arr+1,n-1);
    if(smallAns) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << sortedArray(arr,n)<<'\n';
}