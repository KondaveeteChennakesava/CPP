#include<bits/stdc++.h>
using namespace std;

int firstOccurance(int *arr,int n,int key){
    if(n == 0) return -1;
    if(arr[0] == key) return 0;
    int smallAns = firstOccurance(arr+1,n-1,key);
    if(smallAns == -1) return -1;
    return smallAns+1;
}

int main(){
    int n;
    cin >> n;
    int key;
    cin >> key;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << firstOccurance(arr,n,key) << '\n';
}