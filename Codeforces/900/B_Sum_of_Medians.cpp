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
        long long i=n*k-(d+1);
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