#include <bits/stdc++.h>
using namespace std;

void solve() {
        int n;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x != 0) st.insert(x);
    }
    int ct = (int)st.size();
    if (ct == 0) cout << 0 << "\n";
    else cout << 2 * ct - 1 << "\n";
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
