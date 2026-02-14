#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++){
     cin >> a[i];
    }
    for (int i = 0; i < n; i++){
     cin >> b[i];
    }
    long long req = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) req += (a[i] - b[i]);
    }
    cout << req + 1 << "\n";
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
