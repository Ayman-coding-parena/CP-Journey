// Problem: A - Cupboards
// Platform: codeforces
// Contest: Contest-248
// Rating/Difficulty: 800
// Language: C++23 (GCC 14-64, msys2)
// Verdict: Accepted
// URL: https://codeforces.com/contest/248/submission/399946565
// Solved on: 2026-11-26T20:37:04.439Z

#include <bits/stdc++.h>
using namespace std;

int digitCount(int arr[],int n,int d){
    int m=0;
    for(int i=0;i<n;i++) if(arr[i]==d) m++;
    return m;
}
void solve(){
    int n; cin>>n;
    int l[n],r[n];
    for(int i= 0;i<n;i++){
        cin>>l[i]>>r[i];
    }
    int m1=min(digitCount(l,n,1),digitCount(l,n,0));
    int m2=min(digitCount(r,n,1),digitCount(r,n,0));
    cout<<m1+m2<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

    return 0;
}