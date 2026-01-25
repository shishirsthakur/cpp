#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
     vector<int> req(n);
    req[n - 1] = a[n - 1];
    for (int i = (int)n - 2; i >= 0; i--) req[i] = max(a[i], req[i + 1]);

    vector<int> f = a;
    int l = 0, r = 1;

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] != req[i]) {
            l = i;
            break;
        }
    }
    if (a[l] == req[l]) {
        l = 0;
        r = 1;
    } else {
        vector<int> idx(n + 1, -1);
        for (int i = 0; i < n; i++) idx[a[i]] = i;
        pos = idx[req[l]];
        r = pos + 1;
    }

    for (int i = 0; i < n; i++) {
        if (i >= l && i < r) cout << a[r - 1 - (i - l)] << " ";
        else cout << a[i] << " ";
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
