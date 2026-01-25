#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long int n;
    cin >> n;
    vector<long long> a(n), b(n);
    for(int i = 0; i< n; i++){
        cin >> a[i];
    }
    for(int i = 0; i< n; i++){
        cin >> b[i];
    }
     sort(a.begin(), a.end(), greater<long long>());
    vector<long long> pf(n + 1, 0);
    for (int i = 1; i <= n; i++) pf[i] = pf[i - 1] + b[i - 1];
    long long sol = 0;
    for (int m = 1; m <= n; m++) {
        long long x = a[m - 1];
        int k = int(upper_bound(pf.begin() + 1, pf.end(), (long long)m) - pf.begin()) - 1;
        sol = max(sol, x * 1LL * k);
    }
    cout << sol << "\n";
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
