#include<bits/stdc++.h>
using namespace std;

int nearTwoPow(int n){
    if(n == 1) return 0;
    return 1 + nearTwoPow(n/2);
}

int main(){
    cout << nearTwoPow(256) << '\n';
}