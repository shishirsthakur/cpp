#include <bits/stdc++.h>
using namespace std;
const int m = INT_MAX;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){ 
        cin >> a[i];
    }
    vector<char> b(n + 1, 0);
    for (int i = 0; i < n; i++) b[a[i]] = 1;

    vector<vector<int>> req(n + 1);
    for (int d = 2; d <= n; d++) {
        if (!b[d]) continue;
        for (int x = d; x <= n; x += d){ 
            req[x].push_back(d);
        }
    }
    vector<int> c(n + 1, m);
    for (int i = 1; i <= n; i++) {
        if (b[i]) c[i] = 1;
        for (int d : req[i]) {
            int prev = i / d;
            if (c[prev] != m) c[i] = min(c[i], c[prev] + 1);
        }
    }
    for (int i = 1; i <= n; i++) {
    int p = (c[i] == m ? -1 : c[i]);
    if (i > 1) cout << ' ';
    cout << p;
}
cout << '\n';

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
