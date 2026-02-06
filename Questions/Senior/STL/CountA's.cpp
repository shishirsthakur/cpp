#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int q;
    cin >> q;
    vector<int> pf(n + 1, 0);
    for (int i = 1; i <= n; i++){
     pf[i] = pf[i - 1] + (s[i - 1] == 'a');
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pf[r] - pf[l - 1] << "\n";
    }
}
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // int t;
    // cin >> t;
    // while (t--){
     solve();
// }
}
