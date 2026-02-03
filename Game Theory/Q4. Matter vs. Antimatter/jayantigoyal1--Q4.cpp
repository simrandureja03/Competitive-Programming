#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool canMove=false;
        for(int i=1; i<s.size(); i++) {
            if (s[i] != s[i-1]){
                canMove=true;
                break;
            }
        }
        if(canMove) cout << "Positron\n";
        else cout << "Negatron\n";
    }
    return 0;
}
