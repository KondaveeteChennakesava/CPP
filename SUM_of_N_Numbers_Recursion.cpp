#include<bits/stdc++.h>
using namespace std;

void print(int i, int n){
    if(i < 1){
        cout << n << endl;
        return;
    }
    print(i-1,n+i);
}

int main(){
    int n;
    cin >> n;
    print(n,0);
}