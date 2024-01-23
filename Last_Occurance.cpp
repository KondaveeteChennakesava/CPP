#include<bits/stdc++.h>
using namespace std;

int lastOccurance(int *arr,int n,int key){
    if(n == 0) return -1;
    int smallAns = lastOccurance(arr+1,n-1,key);
    if(smallAns == -1){
        if(arr[0] == key) return 0;
        else return -1;
    }
    return smallAns + 1; 
}

int main(){
    int n;
    cin >> n;
    int key;
    cin >> key;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << lastOccurance(arr,n,key) << '\n';
}