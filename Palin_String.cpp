#include<bits/stdc++.h>
using namespace std;

bool isPalin(string &s,int start,int end){
    if(start >= end) return true;
    return ((s[start] == s[end]) && (isPalin(s,start+1,end-1)));
}

int main(){
    string s;
    cin >> s;
    int start = 0;
    int end = s.length()-1;
    // cout << start << ' ' << end << '\n';
    cout << isPalin(s,start,end);
}