#include <bits/stdc++.h>
using namespace std;

void solve() {
        long long x, y, z;
        cin >> x >> y >> z;
        long long xy = (x & y);
        long long xz = (x & z);
        long long yz = (y & z);
        if (xy == xz && xz == yz) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
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
