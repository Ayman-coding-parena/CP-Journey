#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        bool flag=false;
        vector <long long> arr(n);
        for(long long i=0;i<n;i++) cin>>arr[i];
        if(n%2!=0) flag=false;
        else{
        long long mx=0,mn=999999999999;
        for(int i=0;i<n;i++){
            if(i%2!=0)
            mx=max(mx,arr[i]);
            else mn=min(mn,arr[i]);
        }
        if(mn-mx>1) flag=true;
    }
        if(flag) cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }

    return 0;
}