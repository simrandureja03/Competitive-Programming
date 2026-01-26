#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long b,d,s;
    cin>>b>>d>>s;
    long long ans=LLONG_MAX;
    vector<long long> v={b,d,s};
    sort(v.begin(),v.end());
    if(b==v[2]){
       long long tempb=b-1;
        long long k=0;
        if(d<tempb) k+=(b-d-1);
        if(s<tempb) k+=(b-1-s);
        ans=min(ans,k);
    }
    if(d==v[2]){
        long long tempb=d-1;
        long long k=0;
        if(b<tempb) k+=(d-b-1);
        if(s<tempb) k+=(d-s-1);
        ans=min(ans,k);
    }
    if(s==v[2]){
        long long tempb=s-1;
        long long k=0;
        if(b<tempb) k+=(s-b-1);
        if(d<tempb) k+=(s-d-1);
        ans=min(ans,k);
        
    }
    cout<<ans<<endl;
    return 0;
}