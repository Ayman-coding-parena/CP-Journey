// Problem: B - Effective Approach
// Platform: codeforces
// Contest: 1100
// Rating/Difficulty: 1100
// Language: C++17
// Verdict: Accepted
// URL: https://codeforces.com/problemset/submission/227/400138891
// Solved on: 2026-11-27T23:05:05.990Z

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n; cin>>n;
    vector <pair<int,int>> arr(n);
    for(long long i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second=i;
    }
    long long m; cin>>m;
    vector <int> b(m);
    for(long long i=0;i<m;i++) cin>>b[i];
    long long idx,sum1=0,sum2=0;
    sort(arr.begin(),arr.end());
    for(long long i=0;i<m;i++){
        idx=lower_bound(arr.begin(),arr.end(),make_pair(b[i],0))-arr.begin();
        sum1+=arr[idx].second+1;
        sum2+=(n-(arr[idx].second+1))+1;
    }
    cout<<sum1<<" "<<sum2<<endl;;
    return 0;
}