#include <bits/stdc++.h>
using namespace std;

void solve() {
      long long p, q;
    cin >> p >> q;

    if (p < q && 2*q <= 3*p) {
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
    }
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
