#include <bits/stdc++.h>
using namespace std;

long long d(long long y) {
    long long s = 0;
    while (y > 0) {
        s += y % 10;
        y /= 10;
    }
    return s;
}

void solve() {
    long long x;
    cin >> x;

    long long req = 0;
    for (long long y = x; y <= x + 100; y++) {
        if (y - d(y) == x) req++;
    }
    cout << req << "\n";
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
