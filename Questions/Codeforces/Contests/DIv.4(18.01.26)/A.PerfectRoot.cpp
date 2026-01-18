#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++) {
        long long req = (long long)j * j;
        cout << req;
        if (j < n) cout << " ";
    }
    cout << "\n";

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
