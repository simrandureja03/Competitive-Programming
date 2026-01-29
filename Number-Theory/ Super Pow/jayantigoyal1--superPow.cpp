#include <bits/stdc++.h>
using namespace std;

const int MOD = 1337;

int power(int a,int b){
    int res=1;
    a %= MOD;
    while(b--){
        res=(res*a) % MOD;
    }
    return res;
}

int superPow(int a, vector<int>& b){
    int res=1;
    for(int digit:b){
        res = power(res,10);
        res = (res*power(a,digit)) % MOD;
    }
    return res;
}

int main(){
    int a;
    cin>>a;
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    cout << superPow(a, b) << endl;
    return 0;
}
