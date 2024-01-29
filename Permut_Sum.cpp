#include<bits/stdc++.h>
using namespace std;

void permutationalSum(string s,vector<int>freq,string ans){
    if(ans.size() == s.size()){
        cout << ans << '\n';
        return;
    }
    for(int i=0;i<s.size();i++){
        if(freq[i] == 0){
            freq[i] = 1;
            permutationalSum(s,freq,ans+s[i]);
            freq[i] = 0;
        }
    }
}

int main(){
    string s;
    cin >> s;
    int n = s.size();
    vector<int>fre(n,0);
    permutationalSum(s,fre,"");
}