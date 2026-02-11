#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n), a(n), k(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        k[p[i]] = i;
    }
    for (int i = 0; i < n; i++) cin >> a[i];
    bool f = true;
    int last = -1;
    for (int i = 0; i < n; i++) {
        int rn = k[a[i]];
        if (rn < last){ 
            f = false;
        }
        last = rn;
    }
    if (f){
     cout << "YES\n";
    }
    else cout << "NO\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--){
     solve();
}
}
