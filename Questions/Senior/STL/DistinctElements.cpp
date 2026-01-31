#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    
    while (q--) {
        int x;
        cin >> x;
        int l = lower_bound(a.begin(), a.end(), x) - a.begin();
        int b = a.end() - upper_bound(a.begin(), a.end(), x);
        cout << l << " " << b << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
