#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    vector<long long> cost(N);
    for(int i=0; i<N; i++){
        cin>>cost[i];
    }

    if(N==1){
        cout<<cost[0]<<endl;
        return 0;
    }

    long long prev2=cost[0]; // dp[0]
    long long prev1=cost[1]; // dp[1]
    long long curr;

    for(int i=2; i<N; i++){
        curr=cost[i]+min(prev1,prev2);
        prev2=prev1;
        prev1=curr;
    }
    cout<<min(prev1, prev2)<<endl;
    return 0;
}
