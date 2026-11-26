// Problem: A - Watermelon
// Platform: codeforces
// Contest: Contest-4
// Rating/Difficulty: 800
// Language: C++23 (GCC 14-64, msys2)
// Verdict: Accepted
// URL: https://codeforces.com/contest/4/submission/399946460
// Solved on: 2026-11-26T20:35:38.245Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    if(n%2 ==0 && n>2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}