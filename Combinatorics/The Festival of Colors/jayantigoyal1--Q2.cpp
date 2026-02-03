#include<bits/stdc++.h>
using namespace std;
static const long long MOD=1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    vector<long long> dp(k+1,0), new_dp(k+1,0);
    dp[1]=m;
    for(int i=2; i<=n; i++){
        fill(new_dp.begin(), new_dp.end(),0);
        long long prev=0;
        for(int j=1; j<=k; j++){
            prev=(prev+dp[j])%MOD;
        }
        new_dp[1]=(prev*(m-1)) % MOD;
        for(int j=2; j<=k; j++){
            new_dp[j]=dp[j-1];
        }
        dp.swap(new_dp);
    }
    long long ans=0;
    for(int j=1; j<=k; j++){
        ans=(ans+dp[j]) % MOD;
    }
    cout<<ans<<endl;
    return 0;
}
