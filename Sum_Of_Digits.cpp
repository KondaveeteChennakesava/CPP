#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n,int k){
    if(n <= 9)return k+n;
    return sumOfDigits(n/10,k+(n%10));
}

int main(){
    int n;
    cin >> n;
    cout << sumOfDigits(n,0);
}