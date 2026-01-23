#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, n;
    cin >> x >> y >> n;
    long long k = (n - y) / x * x + y;
    cout << k << "\n";
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
