#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q;
    cin >> q;
    priority_queue<long long> pq;
    while (q--) {
        string s;
        cin >> s;
        if (s == "push") {
            long long x;
            cin >> x;
            pq.push(x);
        } else if (s == "pop") {
            pq.pop();
        } else {
            cout << pq.top() << "\n";
        }
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
