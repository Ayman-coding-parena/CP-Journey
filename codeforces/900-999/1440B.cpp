// Problem: B - Sum of Medians
// Platform: codeforces
// Contest: Contest-1440
// Rating/Difficulty: 900
// Language: C++23 (GCC 14-64, msys2)
// Verdict: Accepted
// URL: https://codeforces.com/contest/1440/submission/399946632
// Solved on: 2026-11-26T20:37:57.410Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin>>t; 
    while(t--){
        long long n,k; cin>>n>>k;
        long long arr[n*k];
        for(long long i=0;i<n*k;i++) cin>>arr[i];
        long long d=ceil(n/2);
        long long sum=0;
        long long i= n*k-(d+1);
        long long l=0;
        while(i>=l){
            sum+=arr[i];
            i-=d+1;
            l+=n-(d+1);
        }
        cout<<sum<<endl;
    }

    return 0;
}