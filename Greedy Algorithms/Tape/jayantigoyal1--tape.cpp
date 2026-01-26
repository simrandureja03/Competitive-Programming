#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long> b(n);
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    int diff[n-1];
    for(int i=0; i<n; i++){
        diff[i]=b[i+1]-b[i]-1;
    }
    sort(diff,diff+n-1);
    int ans=n;
    for(int i=0; i<n-k; i++){
        ans+=diff[i];
    }
    cout<<ans<<endl;
    return 0;
}