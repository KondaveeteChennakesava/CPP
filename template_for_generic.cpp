#include<bits/stdc++.h>
using namespace std;

template<typename T>
int search_ele(int n, T arr[], T key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    // int arr[n];
    // int k;
    // cin >> k;
    // for(int i=0;i<n;i++) cin >> arr[i];
    // cout << search_ele(n,arr,k)<<"\n";
    string s;
    cin >> s;
    string arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    cout << search_ele(n,arr,s) << '\n';

    return 0;
}