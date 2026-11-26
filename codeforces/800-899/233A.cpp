// Problem: A - Perfect Permutation
// Platform: codeforces
// Contest: Contest-233
// Rating/Difficulty: 800
// Language: C++23 (GCC 14-64, msys2)
// Verdict: Accepted
// URL: https://codeforces.com/contest/233/submission/399946683
// Solved on: 2026-11-26T20:38:44.991Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin>>n;
    if(n%2!= 0) cout<<-1<<endl;
    else{
        for(int i=n;i>=1;i--) cout<<i<<" ";
    }

    return 0;
}