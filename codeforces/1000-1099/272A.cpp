// Problem: A - Dima and Friends
// Platform: codeforces
// Contest: Contest-272
// Rating/Difficulty: 1000
// Language: C++23 (GCC 14-64, msys2)
// Verdict: Accepted
// URL: https://codeforces.com/contest/272/submission/399945797
// Solved on: 2026-11-26T20:26:59.253Z

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int n; cin>>n; 
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int ans=0;
    for(int i=sum+1;i<=sum+5;i++){
        if(i%(n+1)==1) continue;
        else ans++;
    }
    cout<<ans<<endl;
    return 0;
}