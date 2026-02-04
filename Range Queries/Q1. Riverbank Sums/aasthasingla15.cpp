#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q; // number of stones and number of queries
    vector<long long> a(n + 1); // 1-based indexing

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Compute prefix sums
    vector<long long> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + a[i];
    }

    // Answer queries
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << prefix[r] - prefix[l - 1] << '\n';
    }

    return 0;
}
