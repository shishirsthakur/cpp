#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int maxm = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxm = max(maxm, a[i]);
    }
    
    int req = 0;
    for (int i = 0; i < n; i++) {
        req += (maxm - a[i]);
    }
    
    cout << req << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
}
