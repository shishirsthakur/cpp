#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> arr;
    long long q = 10;
    for (int k = 1; k <= 18; k++) {
        long long d = q + 1;
        if (d > n) break;
        if (n % d == 0) {
            long long x = n / d;
            if (x > 0) arr.push_back(x);
        }
        q *= 10;
    }
    sort(arr.begin(), arr.end());
    if (arr.empty()) {
        cout << 0 << "\n";
        return;
    }
    cout << arr.size() << "\n";
    for (int i = 0; i < arr.size(); i++) {
        if (i) cout << ' ';
        cout << arr[i];
    }
    cout << "\n";
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
