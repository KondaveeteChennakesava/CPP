#include<bits/stdc++.h>
using namespace std;

vector<int>dp(100001+1,-1);
int Frog(int idx,int arr[],int n){
  if(idx == n-1)return 0;
  if(dp[idx] != -1) return dp[idx];
  int left = abs(arr[idx] - arr[idx+1])+Frog(idx+1,arr,n);
  int right = INT_MAX;
  if(idx+2 <= n-1){
    right = abs(arr[idx] - arr[idx+2])+Frog(idx+2,arr,n);
  }
  int m = min(left,right);
  return dp[idx] = m;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++)cin >> arr[i];
  cout << Frog(0,arr,n);
}